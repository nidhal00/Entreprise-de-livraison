#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "clients.h"
#include "commandes.h"
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
#include <QPrinter>
#include <QPainter>
#include <QFileDialog>
#include <QPageSize>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , model_clients(new QSqlTableModel(this))
    , model_commandes(new QSqlTableModel(this)) {
    ui->setupUi(this);

    // Récupérer la base de données via Connection
    QSqlDatabase db = Connection::getDatabase();
    if (!db.isValid()) {
        qDebug() << "Erreur : Base de données non valide dans MainWindow.";
        return;
    }

    // Initialisation du modèle pour tableView_2 (Clients)
    model_clients->setTable("CLIENTS");
    model_clients->select();
    ui->tableView_2->setModel(model_clients);
    ui->tableView_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView_2->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView_2->setSelectionMode(QAbstractItemView::SingleSelection);

    // S'assurer que toutes les colonnes sont visibles (Clients)
    ui->tableView_2->setColumnHidden(0, false); // ID_CLIENT
    ui->tableView_2->setColumnHidden(1, false); // NOM
    ui->tableView_2->setColumnHidden(2, false); // PRENOM
    ui->tableView_2->setColumnHidden(3, false); // EMAIL
    ui->tableView_2->setColumnHidden(4, false); // TELEPHONE
    ui->tableView_2->setColumnHidden(5, false); // RUE
    ui->tableView_2->setColumnHidden(6, false); // VILLE
    ui->tableView_2->setColumnHidden(7, false); // CODE_POSTAL
    ui->tableView_2->setColumnHidden(8, false); // GOUVERNERAT

    // Ajuste les colonnes pour une meilleure visualisation (Clients)
    ui->tableView_2->setColumnWidth(0, 50);  // ID_CLIENT
    ui->tableView_2->setColumnWidth(1, 100); // NOM
    ui->tableView_2->setColumnWidth(2, 100); // PRENOM
    ui->tableView_2->setColumnWidth(3, 150); // EMAIL
    ui->tableView_2->setColumnWidth(4, 100); // TELEPHONE
    ui->tableView_2->setColumnWidth(5, 150); // RUE
    ui->tableView_2->setColumnWidth(6, 100); // VILLE
    ui->tableView_2->setColumnWidth(7, 100); // CODE_POSTAL
    ui->tableView_2->setColumnWidth(8, 100); // GOUVERNERAT

    // Initialisation du modèle pour tableView (Commandes)
    model_commandes->setTable("COMMANDES");
    model_commandes->select();
    ui->tableView->setModel(model_commandes);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);

    // S'assurer que toutes les colonnes sont visibles (Commandes), y compris ID_COMMANDE
    ui->tableView->setColumnHidden(0, false); // ID_COMMANDE
    ui->tableView->setColumnHidden(1, false); // ID_CLIENT
    ui->tableView->setColumnHidden(2, false); // PRIX
    ui->tableView->setColumnHidden(3, false); // STATUT
    ui->tableView->setColumnHidden(4, false); // DATE

    // Ajuste les colonnes pour une meilleure visualisation (Commandes)
    ui->tableView->setColumnWidth(0, 50);   // ID_COMMANDE
    ui->tableView->setColumnWidth(1, 100);  // ID_CLIENT
    ui->tableView->setColumnWidth(2, 100);  // PRIX
    ui->tableView->setColumnWidth(3, 150);  // STATUT
    ui->tableView->setColumnWidth(4, 150);  // DATE

    // Connecter les signaux
    connect(ui->tableView_2, &QTableView::clicked, this, &MainWindow::on_tableView_2_clicked);
    connect(ui->lineEditRecherche, &QLineEdit::textChanged, this, &MainWindow::on_lineEditRecherche_textChanged);
    connect(ui->tri, &QPushButton::clicked, this, &MainWindow::on_tri_clicked);
    connect(ui->tableView, &QTableView::clicked, this, &MainWindow::on_tableView_clicked);
    connect(ui->pushButton_10, &QPushButton::clicked, this, &MainWindow::on_pushButton_10_clicked);
    connect(ui->pushButton_11, &QPushButton::clicked, this, &MainWindow::on_pushButton_11_clicked);
    connect(ui->lineEditRecherche_2, &QLineEdit::textChanged, this, &MainWindow::on_lineEditRecherche_2_textChanged);
    connect(ui->tricommandes, &QPushButton::clicked, this, &MainWindow::on_triCommandes_clicked); // Add this line

    // Restaurer le style du bouton pushButtonStat
    ui->pushButtonStat->setStyleSheet("QPushButton {"
                                      "   background-color: #FCFCFC;"
                                      "   border: 1px solid black;"
                                      "   border-radius: 8px;"
                                      "   color: black;"
                                      "   font-size: 20px;"
                                      "   font-family: 'Lucida Handwriting';"
                                      "   font-style: italic;"
                                      "   padding: 8px;"
                                      "}"
                                      "QPushButton:pressed {"
                                      "   background-color: #F0F0F0;"
                                      "}");
}

MainWindow::~MainWindow() {
    delete ui;
    delete model_clients;
    delete model_commandes;
}

void MainWindow::on_Confirmer_clicked() {
    QString nom = ui->lineEditNom->text().trimmed();
    QString prenom = ui->lineEditPrenom->text().trimmed();
    QString email = ui->lineEditEmail->text().trimmed();
    QString telephone = ui->lineEditTelephone->text().trimmed();
    QString rue = ui->lineEditRue->text().trimmed();
    QString ville = ui->lineEditVille->text().trimmed();
    QString code_postal = ui->lineEditCode->text().trimmed();
    QString gouvernerat = ui->comboBoxGouvernerat->currentText();

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
        QSqlDatabase db = Connection::getDatabase();
        db.transaction();
        QSqlQuery query(db);
        query.exec("SELECT NVL(MAX(ID_CLIENT), 0) FROM CLIENTS");
        int newId = 1;
        if (query.next()) {
            newId = query.value(0).toInt() + 1;
        }
        query.prepare("SELECT COUNT(*) FROM CLIENTS WHERE ID_CLIENT = :id");
        query.bindValue(":id", newId);
        if (!query.exec() || (query.next() && query.value(0).toInt() > 0)) {
            newId++;
        }

        Clients client(newId, nom, prenom, email, telephone, rue, ville, code_postal, gouvernerat);
        if (client.ajouter()) {
            db.commit();
            Clients::afficher(model_clients);
            QMessageBox::information(this, "Succès", "Client ajouté avec succès.");
            on_Annuler_clicked();
        } else {
            db.rollback();
            QMessageBox::critical(this, "Erreur", "Échec de l'ajout du client.");
        }
    } else {
        Clients client(selectedId, nom, prenom, email, telephone, rue, ville, code_postal, gouvernerat);
        if (client.modifier()) {
            Clients::afficher(model_clients);
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
    selectedId = -1;
}

void MainWindow::on_tableView_2_clicked(const QModelIndex &index) {
    if (index.isValid()) {
        selectedId = model_clients->data(model_clients->index(index.row(), 0)).toInt();
        ui->lineEditNom->setText(model_clients->data(model_clients->index(index.row(), 1)).toString());
        ui->lineEditPrenom->setText(model_clients->data(model_clients->index(index.row(), 2)).toString());
        ui->lineEditEmail->setText(model_clients->data(model_clients->index(index.row(), 3)).toString());
        ui->lineEditTelephone->setText(model_clients->data(model_clients->index(index.row(), 4)).toString());
        ui->lineEditRue->setText(model_clients->data(model_clients->index(index.row(), 5)).toString());
        ui->lineEditVille->setText(model_clients->data(model_clients->index(index.row(), 6)).toString());
        ui->lineEditCode->setText(model_clients->data(model_clients->index(index.row(), 7)).toString());
        ui->comboBoxGouvernerat->setCurrentText(model_clients->data(model_clients->index(index.row(), 8)).toString());
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
            Clients::afficher(model_clients);
            QMessageBox::information(this, "Succès", "Client supprimé avec succès.");
            on_Annuler_clicked();
        } else {
            QMessageBox::critical(this, "Erreur", "Échec de la suppression du client.");
        }
    }
}

void MainWindow::on_lineEditRecherche_textChanged(const QString &text) {
    if (text.isEmpty()) {
        Clients::afficher(model_clients);
        return;
    }

    QSqlDatabase db = Connection::getDatabase();
    QSqlQuery query(db);
    QString searchQuery = "SELECT * FROM CLIENTS WHERE UPPER(NOM) LIKE :search OR UPPER(PRENOM) LIKE :search";
    query.prepare(searchQuery);
    query.bindValue(":search", "%" + text.toUpper() + "%");

    if (!query.exec()) {
        qDebug() << "Erreur lors de la recherche :" << query.lastError().text();
        return;
    }

    model_clients->setQuery(query);
    if (model_clients->lastError().isValid()) {
        qDebug() << "Erreur lors du chargement des résultats de recherche :" << model_clients->lastError().text();
    } else {
        qDebug() << "Résultats de recherche chargés, nombre de lignes :" << model_clients->rowCount();
    }
}

void MainWindow::on_pushButtonStat_clicked() {
    QSqlDatabase db = Connection::getDatabase();
    if (!db.isValid()) {
        QMessageBox::critical(this, "Erreur", "Connexion à la base de données invalide.");
        return;
    }

    QSqlQuery query(db);
    query.exec("SELECT GOUVERNERAT, COUNT(*) AS count FROM CLIENTS GROUP BY GOUVERNERAT");

    QPieSeries *series = new QPieSeries();
    QMap<QString, int> gouverneratCounts;
    while (query.next()) {
        QString gouvernerat = query.value(0).toString();
        int count = query.value(1).toInt();
        gouverneratCounts[gouvernerat] = count;
        series->append(gouvernerat, count);
    }

    if (gouverneratCounts.isEmpty()) {
        series->append("Aucun client", 1);
    }

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Répartition des Clients par Gouvernerat");
    chart->legend()->setVisible(true);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    QDialog dialog(this);
    dialog.setWindowTitle("Statistiques");
    dialog.resize(800, 600);
    QVBoxLayout layout(&dialog);
    layout.addWidget(chartView);

    QString statsText = "<h3>Nombre de clients par gouvernerat :</h3><ul>";
    for (auto it = gouverneratCounts.begin(); it != gouverneratCounts.end(); ++it) {
        statsText += QString("<li>%1 : %2</li>").arg(it.key()).arg(it.value());
    }
    statsText += "</ul>";
    QLabel *label = new QLabel(statsText);
    label->setTextFormat(Qt::RichText);
    layout.addWidget(label);
    dialog.setLayout(&layout);

    dialog.exec();
}

void MainWindow::on_pushButtonPDF_clicked() {
    QSqlDatabase db = Connection::getDatabase();
    if (!db.isValid()) {
        QMessageBox::critical(this, "Erreur", "Connexion à la base de données invalide.");
        return;
    }

    QString fileName = QFileDialog::getSaveFileName(this, "Enregistrer le rapport PDF", "", "PDF Files (*.pdf)");
    if (fileName.isEmpty()) {
        return;
    }

    QPrinter printer(QPrinter::HighResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(fileName);
    printer.setPageSize(QPageSize(QPageSize::A4));

    QPainter painter(&printer);
    painter.setPen(Qt::black);

    QFont titleFont("Arial", 24, QFont::Bold);
    painter.setFont(titleFont);
    painter.drawText(100, 100, "RAPPORT DES CLIENTS");

    QFont tableFont("Arial", 12);
    painter.setFont(tableFont);

    QStringList headers = {"ID_CLIENT", "NOM", "PRENOM", "EMAIL", "TELEPHONE", "RUE", "VILLE", "CODE_POSTAL", "GOUVERNERAT"};
    int y = 150;
    int xStart = 100;
    QVector<int> columnWidths = {1000, 900, 900, 900, 1100, 900, 900, 1300, 1300};
    int rowHeight = 1000;
    int columnSpacing = 20;
    int totalWidth = 0;
    for (int width : columnWidths) totalWidth += width + columnSpacing;

    int x = xStart;
    for (int i = 0; i < headers.size(); ++i) {
        QRect rect(x, y, columnWidths[i], rowHeight);
        painter.drawRect(rect);
        painter.drawText(rect, Qt::AlignVCenter | Qt::AlignLeft, headers[i]);
        x += columnWidths[i] + columnSpacing;
    }
    y += rowHeight + 20;

    for (int row = 0; row < model_clients->rowCount(); ++row) {
        x = xStart;
        for (int col = 0; col < model_clients->columnCount(); ++col) {
            QString data = model_clients->data(model_clients->index(row, col)).toString();
            QRect rect(x, y, columnWidths[col], rowHeight);
            painter.drawRect(rect);
            painter.drawText(rect, Qt::AlignVCenter | Qt::AlignLeft, data);
            x += columnWidths[col] + columnSpacing;
        }
        y += rowHeight + 20;
        if (y > printer.height() - 100) {
            printer.newPage();
            y = 150;
            x = xStart;
            for (int i = 0; i < headers.size(); ++i) {
                QRect rect(x, y, columnWidths[i], rowHeight);
                painter.drawRect(rect);
                painter.drawText(rect, Qt::AlignVCenter | Qt::AlignLeft, headers[i]);
                x += columnWidths[i] + columnSpacing;
            }
            y += rowHeight + 20;
        }
    }

    painter.end();
    QMessageBox::information(this, "Succès", "Rapport PDF enregistré avec succès.");
}

void MainWindow::on_tri_clicked() {
    QString critere = ui->comboBox_2->currentText().trimmed().toLower();
    qDebug() << "Critère sélectionné :" << critere;

    int column = -1;
    if (critere == "ville") {
        column = 6;
    } else if (critere == "gouvernerat") {
        column = 8;
    } else if (critere == "code postal") {
        column = 7;
    }

    if (column != -1) {
        qDebug() << "Tri appliqué sur la colonne :" << column;
        model_clients->setSort(column, Qt::AscendingOrder);
        if (!model_clients->select()) {
            qDebug() << "Erreur lors du tri :" << model_clients->lastError().text();
        }
    } else {
        qDebug() << "Aucun critère valide détecté.";
        QMessageBox::warning(this, "Erreur", "Veuillez sélectionner un critère de tri valide (Ville, Gouvernerat ou Code Postal).");
    }
}
//-----------------------------------------------//commandes
void MainWindow::on_tableView_clicked(const QModelIndex &index) {
    if (index.isValid()) {
        selectedCommandeId = model_commandes->data(model_commandes->index(index.row(), 0)).toInt();
        ui->lineEditNomID->setText(QString::number(model_commandes->data(model_commandes->index(index.row(), 1)).toInt()));
        ui->lineEditNomPrix->setText(QString::number(model_commandes->data(model_commandes->index(index.row(), 2)).toFloat(), 'f', 2));
        ui->comboBoxStatut->setCurrentText(model_commandes->data(model_commandes->index(index.row(), 3)).toString());
        ui->dateEdit->setDate(model_commandes->data(model_commandes->index(index.row(), 4)).toDate());
        qDebug() << "Commande sélectionnée avec ID :" << selectedCommandeId;
    }
}

void MainWindow::on_pushButton_10_clicked() {
    bool isAddMode = (selectedCommandeId == -1);
    int id_client = ui->lineEditNomID->text().toInt();
    float prix = ui->lineEditNomPrix->text().toFloat();
    QString statut = ui->comboBoxStatut->currentText();
    QDate date = ui->dateEdit->date();

    // Contrôles de saisie
    if (isAddMode && id_client <= 0) { // Only check for positive ID during add mode
        QMessageBox::warning(this, "Erreur", "L'ID du client doit être un nombre positif.");
        return;
    }
    if (!Commandes::verifierClient(id_client)) {
        QMessageBox::warning(this, "Erreur", "L'ID du client n'existe pas dans la table des clients.");
        return;
    }
    if (prix <= 10.0) {
        QMessageBox::warning(this, "Erreur", "Le prix doit être supérieur à 10.");
        return;
    }
    if (statut.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez sélectionner un statut.");
        return;
    }
    if (!date.isValid()) {
        QMessageBox::warning(this, "Erreur", "Veuillez sélectionner une date valide.");
        return;
    }
    // New date validation: must be 2025 or later
    QDate minDate(2025, 1, 1); // January 1, 2025
    if (date < minDate) {
        QMessageBox::warning(this, "Erreur", "La date doit être en 2025 ou après 2025.");
        return;
    }

    QSqlDatabase db = Connection::getDatabase();
    if (!db.isValid()) {
        QMessageBox::critical(this, "Erreur", "Connexion à la base de données invalide.");
        return;
    }

    if (isAddMode) {
        db.transaction();
        QSqlQuery query(db);
        int newId = 1;
        query.exec("SELECT NVL(MAX(ID_COMMANDE), 0) FROM COMMANDES");
        if (query.next()) {
            newId = query.value(0).toInt() + 1;
        }
        bool idExists = true;
        while (idExists) {
            query.prepare("SELECT COUNT(*) FROM COMMANDES WHERE ID_COMMANDE = :id");
            query.bindValue(":id", newId);
            if (!query.exec()) {
                qDebug() << "Erreur lors de la vérification de l'ID :" << query.lastError().text();
                db.rollback();
                return;
            }
            if (query.next() && query.value(0).toInt() == 0) {
                idExists = false;
            } else {
                newId++;
            }
        }

        Commandes commande(newId, id_client, prix, statut, date);
        if (commande.ajouter()) {
            db.commit();
            Commandes::afficher(model_commandes);
            QMessageBox::information(this, "Succès", "Commande ajoutée avec succès.");
            on_pushButton_11_clicked();
        } else {
            db.rollback();
            QMessageBox::critical(this, "Erreur", "Échec de l'ajout de la commande.");
        }
    } else {
        Commandes commande(selectedCommandeId, id_client, prix, statut, date);
        if (commande.modifier()) {
            Commandes::afficher(model_commandes);
            QMessageBox::information(this, "Succès", "Commande modifiée avec succès.");
            on_pushButton_11_clicked();
        } else {
            QMessageBox::critical(this, "Erreur", "Échec de la modification de la commande.");
        }
    }
}
void MainWindow::on_pushButton_11_clicked() {
    ui->lineEditNomID->clear();
    ui->lineEditNomPrix->clear();
    ui->comboBoxStatut->setCurrentIndex(0);
    ui->dateEdit->setDate(QDate::currentDate());
    selectedCommandeId = -1;
}

void MainWindow::on_Supprimer_2_clicked() {
    if (selectedCommandeId == -1) {
        QMessageBox::warning(this, "Erreur", "Veuillez sélectionner une commande à supprimer.");
        return;
    }

    QMessageBox::StandardButton reply = QMessageBox::question(this, "Confirmation", "Voulez-vous vraiment supprimer cette commande ?",
                                                              QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        if (Commandes::supprimer(selectedCommandeId)) {
            Commandes::afficher(model_commandes);
            QMessageBox::information(this, "Succès", "Commande supprimée avec succès.");
            on_pushButton_11_clicked();
        } else {
            QMessageBox::critical(this, "Erreur", "Échec de la suppression de la commande.");
        }
    }
}
void MainWindow::on_pushButtonStatCommandes_clicked() {
    QSqlDatabase db = Connection::getDatabase();
    if (!db.isValid()) {
        QMessageBox::critical(this, "Erreur", "Connexion à la base de données invalide.");
        return;
    }

    QSqlQuery query(db);
    if (!query.exec("SELECT STATUT, COUNT(*) AS count FROM COMMANDES GROUP BY STATUT")) {
        qDebug() << "Erreur lors de l'exécution de la requête à" << QDateTime::currentDateTime().toString()
            << ":" << query.lastError().text();
        QMessageBox::critical(this, "Erreur", "Échec de la récupération des statistiques : " + query.lastError().text());
        return;
    }

    // Use QBarSeries for bar chart with parent
    QBarSeries *series = new QBarSeries(); // No parent yet
    QBarSet *set = new QBarSet("Nombre de Commandes"); // No parent yet
    QMap<QString, int> statutCounts;

    while (query.next()) {
        QString statut = query.value(0).toString();
        bool ok;
        int count = query.value(1).toInt(&ok);
        if (ok) {
            statutCounts[statut] = count;
            *set << count; // Add count to bar set
        } else {
            qDebug() << "Erreur de conversion du count pour statut :" << statut << "à" << QDateTime::currentDateTime().toString();
        }
    }

    if (statutCounts.isEmpty()) {
        *set << 1; // Default value if no data
        statutCounts["Aucune commande"] = 1;
    }

    series->append(set);

    // Create chart with parent set later
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Répartition des Commandes par Statut");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    // Customize axes with parent set later
    QStringList categories;
    int maxCount = 0;
    for (auto it = statutCounts.begin(); it != statutCounts.end(); ++it) {
        categories << it.key();
        maxCount = qMax(maxCount, it.value()); // Safely find max count
    }
    if (maxCount == 0) maxCount = 1; // Default to 1 if no data

    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0, maxCount * 1.1); // Set range safely
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    // Create chart view with chart as parent
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setChart(chart); // Ensure chart is owned by chartView

    // Create dialog
    QDialog *dialog = new QDialog(this); // Dynamic allocation
    dialog->setWindowTitle("Statistiques des Commandes - " + QDateTime::currentDateTime().toString("hh:mm:ss"));
    dialog->resize(800, 600);
    QVBoxLayout *layout = new QVBoxLayout(dialog); // Layout owned by dialog
    layout->addWidget(chartView);

    QString statsText = "<h3>Nombre de commandes par statut à " + QDateTime::currentDateTime().toString() + " :</h3><ul>";
    for (auto it = statutCounts.begin(); it != statutCounts.end(); ++it) {
        statsText += QString("<li>%1 : %2</li>").arg(it.key()).arg(it.value());
    }
    statsText += "</ul>";
    QLabel *label = new QLabel(statsText);
    label->setTextFormat(Qt::RichText);
    layout->addWidget(label);

    // Set parents for series, set, and axes to chart to ensure proper ownership
    series->setParent(chart); // Attach series to chart
    set->setParent(series);   // Attach set to series
    axisX->setParent(chart);  // Attach axes to chart
    axisY->setParent(chart);

    // Ensure dialog is deleted when closed, and let Qt manage child objects
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    qDebug() << "Displaying dialog with" << categories.size() << "categories at" << QDateTime::currentDateTime().toString();
    dialog->exec();

}
void MainWindow::on_pushButtonPDFCommandes_clicked() {
    QSqlDatabase db = Connection::getDatabase();
    if (!db.isValid()) {
        QMessageBox::critical(this, "Erreur", "Connexion à la base de données invalide.");
        return;
    }

    QString fileName = QFileDialog::getSaveFileName(this, "Enregistrer le rapport PDF", "", "PDF Files (*.pdf)");
    if (fileName.isEmpty()) {
        return;
    }

    QPrinter printer(QPrinter::HighResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(fileName);
    printer.setPageSize(QPageSize(QPageSize::A4));

    QPainter painter(&printer);
    painter.setPen(Qt::black);

    QFont titleFont("Arial", 24, QFont::Bold);
    painter.setFont(titleFont);
    painter.drawText(100, 100, "RAPPORT DES COMMANDES");

    QFont tableFont("Arial", 12);
    painter.setFont(tableFont);

    QStringList headers = {"ID_COMMANDE", "ID_CLIENT", "PRIX", "STATUT", "DATE_COMMANDE"};
    int y = 150;
    int xStart = 800;
    QVector<int> columnWidths = {1200,1200, 1200, 1200, 2300}; // Adjust widths as needed
    int rowHeight = 500;
    int columnSpacing = 50;
    int totalWidth = 0;
    for (int width : columnWidths) totalWidth += width + columnSpacing;

    int x = xStart;
    for (int i = 0; i < headers.size(); ++i) {
        QRect rect(x, y, columnWidths[i], rowHeight);
        painter.drawRect(rect);
        painter.drawText(rect, Qt::AlignVCenter | Qt::AlignLeft, headers[i]);
        x += columnWidths[i] + columnSpacing;
    }
    y += rowHeight + 20;

    for (int row = 0; row < model_commandes->rowCount(); ++row) {
        x = xStart;
        for (int col = 0; col < model_commandes->columnCount(); ++col) {
            QString data = model_commandes->data(model_commandes->index(row, col)).toString();
            QRect rect(x, y, columnWidths[col], rowHeight);
            painter.drawRect(rect);
            painter.drawText(rect, Qt::AlignVCenter | Qt::AlignLeft, data);
            x += columnWidths[col] + columnSpacing;
        }
        y += rowHeight + 20;
        if (y > printer.height() - 100) {
            printer.newPage();
            y = 150;
            x = xStart;
            for (int i = 0; i < headers.size(); ++i) {
                QRect rect(x, y, columnWidths[i], rowHeight);
                painter.drawRect(rect);
                painter.drawText(rect, Qt::AlignVCenter | Qt::AlignLeft, headers[i]);
                x += columnWidths[i] + columnSpacing;
            }
            y += rowHeight + 20;
        }
    }

    painter.end();
    QMessageBox::information(this, "Succès", "Rapport PDF des commandes enregistré avec succès.");
}
void MainWindow::on_lineEditRecherche_2_textChanged(const QString &text) {
    if (text.isEmpty()) {
        Commandes::afficher(model_commandes); // Reset to show all commands
        return;
    }

    QSqlDatabase db = Connection::getDatabase();
    if (!db.isValid()) {
        qDebug() << "Erreur : Base de données non valide dans la recherche de commandes.";
        return;
    }

    QSqlQuery query(db);
    QString searchQuery = "SELECT * FROM COMMANDES WHERE UPPER(STATUT) LIKE :search "
                          "OR UPPER(CAST(ID_CLIENT AS VARCHAR2(10))) LIKE :search "
                          "OR UPPER(CAST(ID_COMMANDE AS VARCHAR2(10))) LIKE :search";
    query.prepare(searchQuery);
    query.bindValue(":search", "%" + text.toUpper() + "%");

    if (!query.exec()) {
        qDebug() << "Erreur lors de la recherche des commandes :" << query.lastError().text();
        return;
    }

    model_commandes->setQuery(query);
    if (model_commandes->lastError().isValid()) {
        qDebug() << "Erreur lors du chargement des résultats de recherche des commandes :"
                 << model_commandes->lastError().text();
    } else {
        qDebug() << "Résultats de recherche des commandes chargés, nombre de lignes :"
                 << model_commandes->rowCount();
    }
}
void MainWindow::on_triCommandes_clicked() {
    QString critere = ui->comboBoxCommandes->currentText().trimmed().toLower();
    qDebug() << "Critère sélectionné pour tri des commandes :" << critere;

    int column = -1;
    if (critere == "id_commande") {
        column = 0;
    } else if (critere == "id_client") {
        column = 1;
    } else if (critere == "prix") {
        column = 2;
    } else if (critere == "statut") {
        column = 3;
    } else if (critere == "date_commande") {
        column = 4;
    }

    if (column != -1) {
        qDebug() << "Tri appliqué sur la colonne des commandes :" << column;
        model_commandes->setSort(column, Qt::AscendingOrder);
        if (!model_commandes->select()) {
            qDebug() << "Erreur lors du tri des commandes :" << model_commandes->lastError().text();
        }
    } else {
        qDebug() << "Aucun critère valide détecté pour les commandes.";
        QMessageBox::warning(this, "Erreur", "Veuillez sélectionner un critère de tri valide (ID_COMMANDE, ID_CLIENT, PRIX, STATUT ou DATE_COMMANDE).");
    }
}
