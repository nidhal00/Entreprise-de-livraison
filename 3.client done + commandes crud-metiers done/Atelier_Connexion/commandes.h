#ifndef COMMANDES_H
#define COMMANDES_H

#include "qdatetime.h"
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QSqlError>

class Commandes {
public:
    int id_commande;
    int id_client;
    float prix;
    QString statut;
    QDate date;

    Commandes(int id = 0, int client = 0, float p = 0.0, const QString &s = "", const QDate &d = QDate::currentDate());
    bool ajouter();
    bool modifier();
    static bool supprimer(int id);
    static bool afficher(QSqlTableModel *model);
    static bool verifierClient(int id);
};

#endif // COMMANDES_H
