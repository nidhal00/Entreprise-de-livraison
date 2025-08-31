#ifndef CLIENTS_H
#define CLIENTS_H

#include <QString>
#include <QSqlTableModel>

class Clients {
private:
    int id_client;
    QString nom;
    QString prenom;
    QString email;
    QString telephone;
    QString rue;
    QString ville;
    QString code_postal;
    QString gouvernerat;

public:
    Clients(int id, QString n, QString p, QString e, QString t, QString r, QString v, QString c, QString g);
    bool ajouter();
    bool modifier();
    static bool supprimer(int id);
    static void afficher(QSqlTableModel *model);
};

#endif // CLIENTS_H
