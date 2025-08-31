#include "clients.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

Clients::Clients(int id, QString n, QString p, QString e, QString t, QString r, QString v, QString c, QString g)
    : id_client(id), nom(n), prenom(p), email(e), telephone(t), rue(r), ville(v), code_postal(c), gouvernerat(g) {}

bool Clients::ajouter() {
    QSqlQuery query;
    qDebug() << "Préparation de la requête d'insertion pour ID :" << id_client;
    query.prepare("INSERT INTO CLIENTS (ID_CLIENT, NOM, PRENOM, EMAIL, TELEPHONE, RUE, VILLE, CODE_POSTAL, GOUVERNERAT) "
                  "VALUES (:id_client, :nom, :prenom, :email, :telephone, :rue, :ville, :code_postal, :gouvernerat)");
    query.bindValue(":id_client", id_client);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":email", email);
    query.bindValue(":telephone", telephone);
    query.bindValue(":rue", rue);
    query.bindValue(":ville", ville);
    query.bindValue(":code_postal", code_postal);
    query.bindValue(":gouvernerat", gouvernerat);

    if (!query.exec()) {
        qDebug() << "Erreur lors de l'ajout du client :" << query.lastError().text();
        return false;
    }
    qDebug() << "Client ajouté avec succès pour ID :" << id_client;
    return true;
}

bool Clients::modifier() {
    QSqlQuery query;
    qDebug() << "Préparation de la requête de modification pour ID :" << id_client;
    query.prepare("UPDATE CLIENTS SET NOM = :nom, PRENOM = :prenom, EMAIL = :email, TELEPHONE = :telephone, "
                  "RUE = :rue, VILLE = :ville, CODE_POSTAL = :code_postal, GOUVERNERAT = :gouvernerat "
                  "WHERE ID_CLIENT = :id_client");
    query.bindValue(":id_client", id_client);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":email", email);
    query.bindValue(":telephone", telephone);
    query.bindValue(":rue", rue);
    query.bindValue(":ville", ville);
    query.bindValue(":code_postal", code_postal);
    query.bindValue(":gouvernerat", gouvernerat);

    if (!query.exec()) {
        qDebug() << "Erreur lors de la modification du client :" << query.lastError().text();
        return false;
    }
    qDebug() << "Client modifié avec succès pour ID :" << id_client;
    return true;
}

bool Clients::supprimer(int id) {
    QSqlQuery query;
    qDebug() << "Préparation de la requête de suppression pour ID :" << id;
    query.prepare("DELETE FROM CLIENTS WHERE ID_CLIENT = :id");
    query.bindValue(":id", id);

    if (!query.exec()) {
        qDebug() << "Erreur lors de la suppression du client :" << query.lastError().text();
        return false;
    }
    qDebug() << "Client supprimé avec succès pour ID :" << id;
    return true;
}

void Clients::afficher(QSqlTableModel *model) {
    if (!model) {
        qDebug() << "Erreur : Modèle NULL dans afficher()";
        return;
    }
    qDebug() << "Configuration du modèle pour la table CLIENTS...";
    model->setTable("CLIENTS");
    if (!model->select()) {
        qDebug() << "Erreur lors du chargement des données :" << model->lastError().text();
    } else {
        qDebug() << "Données chargées avec succès, nombre de lignes :" << model->rowCount();
        for (int i = 0; i < model->columnCount(); ++i) {
            qDebug() << "Colonne" << i << ": " << model->headerData(i, Qt::Horizontal).toString();
        }
    }
}
