#include "commandes.h"
#include "connection.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

Commandes::Commandes(int id, int client, float p, const QString &s, const QDate &d)
    : id_commande(id), id_client(client), prix(p), statut(s), date(d) {}

bool Commandes::ajouter() {
    QSqlDatabase db = Connection::getDatabase();
    if (!db.isValid()) return false;

    db.transaction();
    QSqlQuery query(db);
    qDebug() << "Préparation de la requête d'insertion pour ID_COMMANDE :" << id_commande;
    query.prepare("INSERT INTO COMMANDES (ID_COMMANDE, ID_CLIENT, PRIX, STATUT, DATE_COMMANDE) "
                  "VALUES (:id_commande, :id_client, :prix, :statut, :date_commande)");
    query.bindValue(":id_commande", id_commande);
    query.bindValue(":id_client", id_client);
    query.bindValue(":prix", prix);
    query.bindValue(":statut", statut);
    query.bindValue(":date_commande", date); // Bind QDate directly

    if (!query.exec()) {
        qDebug() << "Erreur ajout commande :" << query.lastError().text();
        db.rollback();
        return false;
    }
    qDebug() << "Commande ajoutée avec succès pour ID_COMMANDE :" << id_commande;
    db.commit();
    return true;
}

bool Commandes::modifier() {
    QSqlDatabase db = Connection::getDatabase();
    if (!db.isValid()) return false;

    QSqlQuery query(db);
    qDebug() << "Préparation de la requête de modification pour ID_COMMANDE :" << id_commande;
    query.prepare("UPDATE COMMANDES SET ID_CLIENT = :id_client, PRIX = :prix, STATUT = :statut, DATE_COMMANDE = :date_commande "
                  "WHERE ID_COMMANDE = :id_commande");
    query.bindValue(":id_commande", id_commande);
    query.bindValue(":id_client", id_client);
    query.bindValue(":prix", prix);
    query.bindValue(":statut", statut);
    query.bindValue(":date_commande", date); // Bind QDate directly
    if (!query.exec()) {
        qDebug() << "Erreur modification commande :" << query.lastError().text();
        return false;
    }
    qDebug() << "Commande modifiée avec succès pour ID_COMMANDE :" << id_commande;
    return true;
}

bool Commandes::supprimer(int id) {
    QSqlDatabase db = Connection::getDatabase();
    if (!db.isValid()) return false;

    QSqlQuery query(db);
    qDebug() << "Préparation de la requête de suppression pour ID_COMMANDE :" << id;
    query.prepare("DELETE FROM COMMANDES WHERE ID_COMMANDE = :id");
    query.bindValue(":id", id);
    if (!query.exec()) {
        qDebug() << "Erreur suppression commande :" << query.lastError().text();
        return false;
    }
    qDebug() << "Commande supprimée avec succès pour ID_COMMANDE :" << id;
    return true;
}

bool Commandes::afficher(QSqlTableModel *model) {
    QSqlDatabase db = Connection::getDatabase();
    if (!db.isValid()) return false;

    model->setTable("COMMANDES");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    if (!model->select()) {
        qDebug() << "Erreur lors du chargement des données :" << model->lastError().text();
        return false;
    }
    qDebug() << "Données chargées avec succès, nombre de lignes :" << model->rowCount();
    for (int i = 0; i < model->columnCount(); ++i) {
        qDebug() << "Colonne" << i << ": " << model->headerData(i, Qt::Horizontal).toString();
    }
    return true;
}

bool Commandes::verifierClient(int id) {
    QSqlDatabase db = Connection::getDatabase();
    if (!db.isValid()) return false;

    QSqlQuery query(db);
    query.prepare("SELECT COUNT(*) FROM CLIENTS WHERE ID_CLIENT = :id");
    query.bindValue(":id", id);
    if (!query.exec() || !query.next()) {
        qDebug() << "Erreur vérification client :" << query.lastError().text();
        return false;
    }
    return query.value(0).toInt() > 0;
}
