#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "connection.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    Connection c;
    if (c.createConnection()) {
        MainWindow w;
        w.show();
        return a.exec();
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Base de données non ouverte"),
                              QObject::tr("Échec de la connexion.\n"
                                          "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
        return -1;
    }
}
