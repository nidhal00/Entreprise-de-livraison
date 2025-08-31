#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlTableModel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Confirmer_clicked();
    void on_Annuler_clicked();
    void on_tableView_2_clicked(const QModelIndex &index);
    void on_Supprimer_clicked();
    void on_lineEditRecherche_textChanged(const QString &text);
    void on_pushButtonStat_clicked();
    void on_pushButtonPDF_clicked();
    void on_tri_clicked();
    void on_tableView_clicked(const QModelIndex &index);
    void on_pushButton_10_clicked();
    void on_pushButton_11_clicked();
    void on_Supprimer_2_clicked();
    void on_pushButtonStatCommandes_clicked();
    void on_pushButtonPDFCommandes_clicked();
    void on_lineEditRecherche_2_textChanged(const QString &text);
    void on_triCommandes_clicked();
    void on_pushButton_Appel_clicked();
    void on_pushButton_SMS_clicked(); // New slot

private:
    Ui::MainWindow *ui;
    QSqlTableModel *model_clients;
    QSqlTableModel *model_commandes;
    int selectedId = -1;         // Pour suivre l'ID du client sélectionné
    int selectedCommandeId = -1; // Pour suivre l'ID de la commande sélectionnée
    QString selectedPhoneNumber; // Store phone number
};
#endif // MAINWINDOW_H
