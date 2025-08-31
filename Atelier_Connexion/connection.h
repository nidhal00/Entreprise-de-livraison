#ifndef CONNECTION_H
#define CONNECTION_H

#include <QSqlDatabase>

class Connection {
public:
    Connection();
    bool createConnection();
    static QSqlDatabase getDatabase(); // Méthode pour accéder à la base de données
};

#endif // CONNECTION_H
