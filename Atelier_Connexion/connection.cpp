#include "connection.h"
#include <QSqlError>
#include <QDebug>

Connection::Connection() {}

bool Connection::createConnection() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Source_Projet2A"); // Nom du DSN ODBC
    db.setUserName("nidhal");                // Nom d'utilisateur
    db.setPassword("gouader");            // Mot de passe

    if (!db.open()) {
        qDebug() << "Échec de la connexion à la base de données :" << db.lastError().text();
        return false;
    }
    qDebug() << "Connexion à la base de données réussie avec le pilote :" << db.driverName();
    return true;
}

QSqlDatabase Connection::getDatabase() {
    return QSqlDatabase::database();
}
