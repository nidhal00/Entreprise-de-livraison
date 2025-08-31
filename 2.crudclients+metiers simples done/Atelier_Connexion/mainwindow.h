#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlTableModel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
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

private:
    Ui::MainWindow *ui;
    QSqlTableModel *model;
    int selectedId = -1; // ID du client sélectionné pour modification ou suppression (-1 si ajout)
};

#endif // MAINWINDOW_H
