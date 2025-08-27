#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "clients.h"
#include "connection.h"
#include <QMessageBox>
#include <QRegularExpression>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>
#include <QPieSeries>
#include <QChart>
#include <QChartView>
#include <QtCharts>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);

    // Récupérer la base de données via Connection
    QSqlDatabase db = Connection::getDatabase();
    if (!db.isValid()) {
        qDebug() << "Erreur : Base de données non valide dans MainWindow.";
        return;
    }

    // Initialisation du modèle pour tableView_2
    model = new QSqlTableModel(this, db);
    Clients::afficher(model); // Charge toutes les données au démarrage
    ui->tableView_2->setModel(model); // Lie le modèle à la vue
    ui->tableView_2->setEditTriggers(QAbstractItemView::NoEditTriggers); // Rend la vue en lecture seule
    ui->tableView_2->setSelectionBehavior(QAbstractItemView::SelectRows); // Sélectionne toute la ligne
    ui->tableView_2->setSelectionMode(QAbstractItemView::SingleSelection); // Une seule ligne sélectionnée

    // S'assurer que toutes les colonnes sont visibles
    ui->tableView_2->setColumnHidden(0, false); // ID_CLIENT
    ui->tableView_2->setColumnHidden(1, false); // NOM
    ui->tableView_2->setColumnHidden(2, false); // PRENOM
    ui->tableView_2->setColumnHidden(3, false); // EMAIL
    ui->tableView_2->setColumnHidden(4, false); // TELEPHONE
    ui->tableView_2->setColumnHidden(5, false); // RUE
    ui->tableView_2->setColumnHidden(6, false); // VILLE
    ui->tableView_2->setColumnHidden(7, false); // CODE_POSTAL
    ui->tableView_2->setColumnHidden(8, false); // GOUVERNERAT

    // Ajuste les colonnes pour une meilleure visualisation
    ui->tableView_2->setColumnWidth(0, 50);  // ID_CLIENT
    ui->tableView_2->setColumnWidth(1, 100); // NOM
    ui->tableView_2->setColumnWidth(2, 100); // PRENOM
    ui->tableView_2->setColumnWidth(3, 150); // EMAIL
    ui->tableView_2->setColumnWidth(4, 100); // TELEPHONE
    ui->tableView_2->setColumnWidth(5, 150); // RUE
    ui->tableView_2->setColumnWidth(6, 100); // VILLE
    ui->tableView_2->setColumnWidth(7, 100); // CODE_POSTAL
    ui->tableView_2->setColumnWidth(8, 100); // GOUVERNERAT

    // Connecter les signaux
    connect(ui->tableView_2, &QTableView::clicked, this, &MainWindow::on_tableView_2_clicked);
    connect(ui->lineEditRecherche, &QLineEdit::textChanged, this, &MainWindow::on_lineEditRecherche_textChanged);
    connect(ui->pushButtonStat, &QPushButton::clicked, this, &MainWindow::on_pushButtonStat_clicked);

    // Restaurer le style du bouton pushButtonStat selon vos préférences
    ui->pushButtonStat->setStyleSheet("QPushButton {"
                                      "   background-color: #FCFCFC;"   /* Fond rose pastel */
                                      "   border: 1px solid black;"     /* Contour noir */
                                      "   border-radius: 8px;"          /* Coins légèrement arrondis */
                                      "   color: black;"                /* Couleur du texte */
                                      "   font-size: 20px;"             /* Taille du texte */
                                      "   font-family: 'Lucida Handwriting';" /* Police artistique */
                                      "   font-style: italic;"          /* Style italique */
                                      "   padding: 8px;"                /* Espacement interne */
                                      "}"
                                      "QPushButton:pressed {"
                                      "   background-color: #F0F0F0;"   /* Légère variation au clic */
                                      "}");
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_Confirmer_clicked() {
    // Récupération des valeurs des champs
    QString nom = ui->lineEditNom->text().trimmed();
    QString prenom = ui->lineEditPrenom->text().trimmed();
    QString email = ui->lineEditEmail->text().trimmed();
    QString telephone = ui->lineEditTelephone->text().trimmed();
    QString rue = ui->lineEditRue->text().trimmed();
    QString ville = ui->lineEditVille->text().trimmed();
    QString code_postal = ui->lineEditCode->text().trimmed();
    QString gouvernerat = ui->comboBoxGouvernerat->currentText();

    // Contrôles de saisie
    if (nom.isEmpty() || prenom.isEmpty() || email.isEmpty() || telephone.isEmpty() ||
        rue.isEmpty() || ville.isEmpty() || code_postal.isEmpty() || gouvernerat.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Tous les champs doivent être remplis.");
        return;
    }

    QRegularExpression lettersOnly("^[A-Za-z]+$");
    if (!lettersOnly.match(nom).hasMatch()) {
        QMessageBox::warning(this, "Erreur", "Le nom doit contenir uniquement des lettres.");
        return;
    }

    if (!lettersOnly.match(prenom).hasMatch()) {
        QMessageBox::warning(this, "Erreur", "Le prénom doit contenir uniquement des lettres.");
        return;
    }

    if (!email.contains("@")) {
        QMessageBox::warning(this, "Erreur", "L'email doit contenir le caractère '@'.");
        return;
    }

    QRegularExpression phoneRegex("^[0-9]{8}$");
    if (!phoneRegex.match(telephone).hasMatch()) {
        QMessageBox::warning(this, "Erreur", "Le téléphone doit être exactement 8 chiffres.");
        return;
    }

    QRegularExpression rueRegex("^(?=.*[A-Za-z])(?=.*[0-9])[A-Za-z0-9 ]+$");
    if (!rueRegex.match(rue).hasMatch()) {
        QMessageBox::warning(this, "Erreur", "La rue doit contenir des lettres, des chiffres et peut contenir des espaces (ex: '3 rue la seine').");
        return;
    }

    if (!lettersOnly.match(ville).hasMatch()) {
        QMessageBox::warning(this, "Erreur", "La ville doit contenir uniquement des lettres.");
        return;
    }

    QRegularExpression codeRegex("^[0-9]{4}$");
    if (!codeRegex.match(code_postal).hasMatch()) {
        QMessageBox::warning(this, "Erreur", "Le code postal doit être exactement 4 chiffres.");
        return;
    }

    if (selectedId == -1) {
        // Mode ajout
        QSqlDatabase db = Connection::getDatabase();
        db.transaction();
        QSqlQuery query(db);
        query.exec("SELECT NVL(MAX(ID_CLIENT), 0) FROM CLIENTS");
        int newId = 1;
        if (query.next()) {
            newId = query.value(0).toInt() + 1;
        }
        qDebug() << "Nouveau ID généré (avant vérification) :" << newId;

        query.prepare("SELECT COUNT(*) FROM CLIENTS WHERE ID_CLIENT = :id");
        query.bindValue(":id", newId);
        if (!query.exec()) {
            qDebug() << "Erreur lors de la vérification de l'ID :" << query.lastError().text();
            db.rollback();
            return;
        }
        if (query.next() && query.value(0).toInt() > 0) {
            qDebug() << "Conflit détecté, incrémentation de l'ID...";
            newId++;
        }
        qDebug() << "Nouveau ID généré (après vérification) :" << newId;

        Clients client(newId, nom, prenom, email, telephone, rue, ville, code_postal, gouvernerat);
        if (client.ajouter()) {
            db.commit();
            Clients::afficher(model);
            QMessageBox::information(this, "Succès", "Client ajouté avec succès.");
            on_Annuler_clicked();
        } else {
            db.rollback();
            QMessageBox::critical(this, "Erreur", "Échec de l'ajout du client.");
        }
    } else {
        // Mode modification
        Clients client(selectedId, nom, prenom, email, telephone, rue, ville, code_postal, gouvernerat);
        if (client.modifier()) {
            Clients::afficher(model);
            QMessageBox::information(this, "Succès", "Client modifié avec succès.");
            on_Annuler_clicked();
        } else {
            QMessageBox::critical(this, "Erreur", "Échec de la modification du client.");
        }
    }
}

void MainWindow::on_Annuler_clicked() {
    ui->lineEditNom->clear();
    ui->lineEditPrenom->clear();
    ui->lineEditEmail->clear();
    ui->lineEditTelephone->clear();
    ui->lineEditRue->clear();
    ui->lineEditVille->clear();
    ui->lineEditCode->clear();
    ui->comboBoxGouvernerat->setCurrentIndex(0);
    selectedId = -1; // Réinitialiser pour mode ajout
}

void MainWindow::on_tableView_2_clicked(const QModelIndex &index) {
    if (index.isValid()) {
        selectedId = model->data(model->index(index.row(), 0)).toInt();
        ui->lineEditNom->setText(model->data(model->index(index.row(), 1)).toString());
        ui->lineEditPrenom->setText(model->data(model->index(index.row(), 2)).toString());
        ui->lineEditEmail->setText(model->data(model->index(index.row(), 3)).toString());
        ui->lineEditTelephone->setText(model->data(model->index(index.row(), 4)).toString());
        ui->lineEditRue->setText(model->data(model->index(index.row(), 5)).toString());
        ui->lineEditVille->setText(model->data(model->index(index.row(), 6)).toString());
        ui->lineEditCode->setText(model->data(model->index(index.row(), 7)).toString());
        ui->comboBoxGouvernerat->setCurrentText(model->data(model->index(index.row(), 8)).toString());
        qDebug() << "Client sélectionné avec ID :" << selectedId;
    }
}

void MainWindow::on_Supprimer_clicked() {
    if (selectedId == -1) {
        QMessageBox::warning(this, "Erreur", "Veuillez sélectionner un client à supprimer.");
        return;
    }

    QMessageBox::StandardButton reply = QMessageBox::question(this, "Confirmation", "Voulez-vous vraiment supprimer ce client ?",
                                                              QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QSqlDatabase db = Connection::getDatabase();
        if (Clients::supprimer(selectedId)) {
            Clients::afficher(model);
            QMessageBox::information(this, "Succès", "Client supprimé avec succès.");
            on_Annuler_clicked();
        } else {
            QMessageBox::critical(this, "Erreur", "Échec de la suppression du client.");
        }
    }
}

void MainWindow::on_lineEditRecherche_textChanged(const QString &text) {
    if (text.isEmpty()) {
        // Réinitialiser à l'état initial (afficher tous les clients)
        Clients::afficher(model);
        return;
    }

    // Recherche par nom ou prénom avec correspondance partielle (insensible à la casse)
    QSqlDatabase db = Connection::getDatabase();
    QSqlQuery query(db);
    QString searchQuery = "SELECT * FROM CLIENTS WHERE UPPER(NOM) LIKE :search OR UPPER(PRENOM) LIKE :search";
    query.prepare(searchQuery);
    query.bindValue(":search", "%" + text.toUpper() + "%");

    if (!query.exec()) {
        qDebug() << "Erreur lors de la recherche :" << query.lastError().text();
        return;
    }

    model->setQuery(query);
    if (model->lastError().isValid()) {
        qDebug() << "Erreur lors du chargement des résultats de recherche :" << model->lastError().text();
    } else {
        qDebug() << "Résultats de recherche chargés, nombre de lignes :" << model->rowCount();
    }
}

void MainWindow::on_pushButtonStat_clicked() {
    // Vérifier la connexion
    QSqlDatabase db = Connection::getDatabase();
    if (!db.isValid()) {
        QMessageBox::critical(this, "Erreur", "Connexion à la base de données invalide.");
        return;
    }

    // Compter le nombre de clients par gouvernorat
    QSqlQuery query(db);
    query.exec("SELECT GOUVERNERAT, COUNT(*) AS count FROM CLIENTS GROUP BY GOUVERNERAT");

    QPieSeries *series = new QPieSeries();
    QMap<QString, int> gouvernoratCounts;
    while (query.next()) {
        QString gouvernorat = query.value(0).toString();
        int count = query.value(1).toInt();
        gouvernoratCounts[gouvernorat] = count;
        series->append(gouvernorat, count);
    }

    // Si aucun client n'est trouvé, ajouter une tranche par défaut
    if (gouvernoratCounts.isEmpty()) {
        series->append("Aucun client", 1);
    }

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Répartition des Clients par Gouvernorat");
    chart->legend()->setVisible(true);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Afficher dans une boîte de dialogue plus grande
    QDialog dialog(this); // Utiliser un objet local au lieu d'un pointeur
    dialog.setWindowTitle("Statistiques");
    dialog.resize(800, 600); // Taille augmentée
    QVBoxLayout *layout = new QVBoxLayout(&dialog);
    layout->addWidget(chartView);

    // Ajouter une liste des comptes par gouvernorat
    QString statsText = "<h3>Nombre de clients par gouvernorat :</h3><ul>";
    for (auto it = gouvernoratCounts.begin(); it != gouvernoratCounts.end(); ++it) {
        statsText += QString("<li>%1 : %2</li>").arg(it.key()).arg(it.value());
    }
    statsText += "</ul>";
    QLabel *label = new QLabel(statsText);
    label->setTextFormat(Qt::RichText); // Permet le formatage HTML
    layout->addWidget(label);
    dialog.setLayout(layout);

    // Exécuter la boîte de dialogue
    dialog.exec();

    // Les objets seront automatiquement nettoyés grâce à la portée locale
}
