/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QStackedWidget *stackedWidget;
    QWidget *pagecommande;
    QLabel *label_2;
    QTableView *tableView;
    QPushButton *pushButtonStatCommandes;
    QLabel *label_3;
    QPushButton *pushButton_8;
    QPushButton *pushButtonPDFCommandes;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QLabel *label_4;
    QPushButton *Supprimer_2;
    QPushButton *pushButtonQR;
    QPushButton *pushButtonTODO;
    QPushButton *tricommandes;
    QComboBox *comboBoxCommandes;
    QLineEdit *lineEditNomPrix;
    QLabel *label_12;
    QLabel *label_17;
    QLabel *label_19;
    QLabel *label_20;
    QLineEdit *lineEditNomID;
    QComboBox *comboBoxStatut;
    QDateEdit *dateEdit;
    QLineEdit *lineEditRecherche_2;
    QWidget *pageclients;
    QPushButton *pushButton_SMS;
    QPushButton *pushButton_Appel;
    QPushButton *pushButtonStat;
    QPushButton *tri;
    QPushButton *Supprimer;
    QPushButton *Annuler;
    QLabel *label_5;
    QPushButton *pushButton_22;
    QComboBox *comboBox_2;
    QPushButton *pushButtonPDF;
    QTableView *tableView_2;
    QPushButton *Confirmer;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEditNom;
    QLineEdit *lineEditPrenom;
    QLineEdit *lineEditEmail;
    QLineEdit *lineEditTelephone;
    QLineEdit *lineEditRue;
    QLineEdit *lineEditVille;
    QLineEdit *lineEditCode;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QComboBox *comboBoxGouvernerat;
    QLineEdit *lineEditRecherche;
    QPushButton *pushButtonClients;
    QPushButton *pushButtonCommandes;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1355, 768);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(252, 252, 252);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 251, 741));
        label->setStyleSheet(QString::fromUtf8("    background-color: #ADD8E6;   \n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 16px;            /* Taille du texte */\n"
"    padding: 5px;               /* Espacement interne */"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(270, 20, 1071, 751));
        pagecommande = new QWidget();
        pagecommande->setObjectName("pagecommande");
        label_2 = new QLabel(pagecommande);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(310, 20, 321, 51));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #ADD8E6;   \n"
"    border: 2px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
"}"));
        tableView = new QTableView(pagecommande);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 160, 651, 371));
        pushButtonStatCommandes = new QPushButton(pagecommande);
        pushButtonStatCommandes->setObjectName("pushButtonStatCommandes");
        pushButtonStatCommandes->setGeometry(QRect(190, 630, 151, 31));
        pushButtonStatCommandes->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        label_3 = new QLabel(pagecommande);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(700, 90, 371, 621));
        label_3->setStyleSheet(QString::fromUtf8("    background-color: #ADD8E6;   \n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 16px;            /* Taille du texte */\n"
"    padding: 5px;               /* Espacement interne */"));
        pushButton_8 = new QPushButton(pagecommande);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(740, 110, 311, 31));
        pushButton_8->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        pushButtonPDFCommandes = new QPushButton(pagecommande);
        pushButtonPDFCommandes->setObjectName("pushButtonPDFCommandes");
        pushButtonPDFCommandes->setGeometry(QRect(20, 630, 151, 31));
        pushButtonPDFCommandes->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        pushButton_10 = new QPushButton(pagecommande);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(910, 660, 151, 31));
        pushButton_10->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        pushButton_11 = new QPushButton(pagecommande);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(740, 660, 141, 31));
        pushButton_11->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        label_4 = new QLabel(pagecommande);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 90, 661, 51));
        label_4->setStyleSheet(QString::fromUtf8("    background-color: #ADD8E6;   \n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 16px;            /* Taille du texte */\n"
"    padding: 5px;               /* Espacement interne */"));
        Supprimer_2 = new QPushButton(pagecommande);
        Supprimer_2->setObjectName("Supprimer_2");
        Supprimer_2->setGeometry(QRect(570, 100, 101, 31));
        Supprimer_2->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 15px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        pushButtonQR = new QPushButton(pagecommande);
        pushButtonQR->setObjectName("pushButtonQR");
        pushButtonQR->setGeometry(QRect(360, 630, 151, 31));
        pushButtonQR->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        pushButtonTODO = new QPushButton(pagecommande);
        pushButtonTODO->setObjectName("pushButtonTODO");
        pushButtonTODO->setGeometry(QRect(530, 630, 151, 31));
        pushButtonTODO->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        tricommandes = new QPushButton(pagecommande);
        tricommandes->setObjectName("tricommandes");
        tricommandes->setGeometry(QRect(20, 550, 151, 31));
        tricommandes->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        comboBoxCommandes = new QComboBox(pagecommande);
        comboBoxCommandes->addItem(QString());
        comboBoxCommandes->addItem(QString());
        comboBoxCommandes->addItem(QString());
        comboBoxCommandes->addItem(QString());
        comboBoxCommandes->setObjectName("comboBoxCommandes");
        comboBoxCommandes->setGeometry(QRect(200, 550, 471, 31));
        comboBoxCommandes->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        lineEditNomPrix = new QLineEdit(pagecommande);
        lineEditNomPrix->setObjectName("lineEditNomPrix");
        lineEditNomPrix->setGeometry(QRect(860, 240, 201, 41));
        lineEditNomPrix->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        label_12 = new QLabel(pagecommande);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(720, 370, 151, 51));
        label_12->setStyleSheet(QString::fromUtf8("    background-color: transparent;    /* Pas de fond */\n"
"    border: none;                     /* Pas de contour */\n"
"    color: black;                     /* Couleur du texte */\n"
"    font-size: 25px;                  /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";/* Police artistique */\n"
"    font-style: italic;               /* Italique */\n"
"    padding: 8px;                     /* Espacement interne */"));
        label_17 = new QLabel(pagecommande);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(710, 300, 151, 51));
        label_17->setStyleSheet(QString::fromUtf8("    background-color: transparent;    /* Pas de fond */\n"
"    border: none;                     /* Pas de contour */\n"
"    color: black;                     /* Couleur du texte */\n"
"    font-size: 25px;                  /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";/* Police artistique */\n"
"    font-style: italic;               /* Italique */\n"
"    padding: 8px;                     /* Espacement interne */"));
        label_19 = new QLabel(pagecommande);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(730, 240, 151, 51));
        label_19->setStyleSheet(QString::fromUtf8("    background-color: transparent;    /* Pas de fond */\n"
"    border: none;                     /* Pas de contour */\n"
"    color: black;                     /* Couleur du texte */\n"
"    font-size: 25px;                  /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";/* Police artistique */\n"
"    font-style: italic;               /* Italique */\n"
"    padding: 8px;                     /* Espacement interne */"));
        label_20 = new QLabel(pagecommande);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(690, 180, 161, 51));
        label_20->setStyleSheet(QString::fromUtf8("    background-color: transparent;    /* Pas de fond */\n"
"    border: none;                     /* Pas de contour */\n"
"    color: black;                     /* Couleur du texte */\n"
"    font-size: 25px;                  /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";/* Police artistique */\n"
"    font-style: italic;               /* Italique */\n"
"    padding: 8px;                     /* Espacement interne */"));
        lineEditNomID = new QLineEdit(pagecommande);
        lineEditNomID->setObjectName("lineEditNomID");
        lineEditNomID->setGeometry(QRect(860, 180, 201, 41));
        lineEditNomID->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        comboBoxStatut = new QComboBox(pagecommande);
        comboBoxStatut->addItem(QString());
        comboBoxStatut->addItem(QString());
        comboBoxStatut->addItem(QString());
        comboBoxStatut->addItem(QString());
        comboBoxStatut->setObjectName("comboBoxStatut");
        comboBoxStatut->setGeometry(QRect(860, 300, 201, 41));
        comboBoxStatut->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        dateEdit = new QDateEdit(pagecommande);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(860, 370, 201, 41));
        dateEdit->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        lineEditRecherche_2 = new QLineEdit(pagecommande);
        lineEditRecherche_2->setObjectName("lineEditRecherche_2");
        lineEditRecherche_2->setGeometry(QRect(30, 100, 521, 31));
        lineEditRecherche_2->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 15px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        stackedWidget->addWidget(pagecommande);
        pageclients = new QWidget();
        pageclients->setObjectName("pageclients");
        pushButton_SMS = new QPushButton(pageclients);
        pushButton_SMS->setObjectName("pushButton_SMS");
        pushButton_SMS->setGeometry(QRect(530, 620, 151, 41));
        pushButton_SMS->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        pushButton_Appel = new QPushButton(pageclients);
        pushButton_Appel->setObjectName("pushButton_Appel");
        pushButton_Appel->setGeometry(QRect(360, 620, 151, 41));
        pushButton_Appel->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        pushButtonStat = new QPushButton(pageclients);
        pushButtonStat->setObjectName("pushButtonStat");
        pushButtonStat->setGeometry(QRect(190, 620, 151, 41));
        pushButtonStat->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        tri = new QPushButton(pageclients);
        tri->setObjectName("tri");
        tri->setGeometry(QRect(20, 540, 151, 31));
        tri->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        Supprimer = new QPushButton(pageclients);
        Supprimer->setObjectName("Supprimer");
        Supprimer->setGeometry(QRect(570, 90, 101, 31));
        Supprimer->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 15px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        Annuler = new QPushButton(pageclients);
        Annuler->setObjectName("Annuler");
        Annuler->setGeometry(QRect(720, 670, 141, 31));
        Annuler->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        label_5 = new QLabel(pageclients);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(300, 10, 331, 51));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #ADD8E6;   \n"
"    border: 2px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
"}"));
        pushButton_22 = new QPushButton(pageclients);
        pushButton_22->setObjectName("pushButton_22");
        pushButton_22->setGeometry(QRect(740, 100, 311, 31));
        pushButton_22->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        comboBox_2 = new QComboBox(pageclients);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(200, 540, 471, 31));
        comboBox_2->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        pushButtonPDF = new QPushButton(pageclients);
        pushButtonPDF->setObjectName("pushButtonPDF");
        pushButtonPDF->setGeometry(QRect(20, 620, 151, 41));
        pushButtonPDF->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        tableView_2 = new QTableView(pageclients);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setGeometry(QRect(20, 150, 651, 371));
        Confirmer = new QPushButton(pageclients);
        Confirmer->setObjectName("Confirmer");
        Confirmer->setGeometry(QRect(900, 670, 151, 31));
        Confirmer->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        label_6 = new QLabel(pageclients);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 80, 661, 51));
        label_6->setStyleSheet(QString::fromUtf8("    background-color: #ADD8E6;   \n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 16px;            /* Taille du texte */\n"
"    padding: 5px;               /* Espacement interne */"));
        label_7 = new QLabel(pageclients);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(700, 80, 371, 651));
        label_7->setStyleSheet(QString::fromUtf8("    background-color: #ADD8E6;   \n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 16px;            /* Taille du texte */\n"
"    padding: 5px;               /* Espacement interne */"));
        lineEditNom = new QLineEdit(pageclients);
        lineEditNom->setObjectName("lineEditNom");
        lineEditNom->setGeometry(QRect(860, 170, 201, 31));
        lineEditNom->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 15px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        lineEditPrenom = new QLineEdit(pageclients);
        lineEditPrenom->setObjectName("lineEditPrenom");
        lineEditPrenom->setGeometry(QRect(860, 230, 201, 31));
        lineEditPrenom->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 15px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        lineEditEmail = new QLineEdit(pageclients);
        lineEditEmail->setObjectName("lineEditEmail");
        lineEditEmail->setGeometry(QRect(860, 290, 201, 31));
        lineEditEmail->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 15px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        lineEditTelephone = new QLineEdit(pageclients);
        lineEditTelephone->setObjectName("lineEditTelephone");
        lineEditTelephone->setGeometry(QRect(860, 350, 201, 31));
        lineEditTelephone->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 15px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        lineEditRue = new QLineEdit(pageclients);
        lineEditRue->setObjectName("lineEditRue");
        lineEditRue->setGeometry(QRect(860, 470, 201, 31));
        lineEditRue->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 15px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        lineEditVille = new QLineEdit(pageclients);
        lineEditVille->setObjectName("lineEditVille");
        lineEditVille->setGeometry(QRect(860, 530, 201, 31));
        lineEditVille->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 15px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        lineEditCode = new QLineEdit(pageclients);
        lineEditCode->setObjectName("lineEditCode");
        lineEditCode->setGeometry(QRect(860, 590, 201, 31));
        lineEditCode->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 15px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        label_8 = new QLabel(pageclients);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(700, 160, 151, 51));
        label_8->setStyleSheet(QString::fromUtf8("    background-color: transparent;    /* Pas de fond */\n"
"    border: none;                     /* Pas de contour */\n"
"    color: black;                     /* Couleur du texte */\n"
"    font-size: 25px;                  /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";/* Police artistique */\n"
"    font-style: italic;               /* Italique */\n"
"    padding: 8px;                     /* Espacement interne */"));
        label_9 = new QLabel(pageclients);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(690, 220, 151, 51));
        label_9->setStyleSheet(QString::fromUtf8("    background-color: transparent;    /* Pas de fond */\n"
"    border: none;                     /* Pas de contour */\n"
"    color: black;                     /* Couleur du texte */\n"
"    font-size: 25px;                  /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";/* Police artistique */\n"
"    font-style: italic;               /* Italique */\n"
"    padding: 8px;                     /* Espacement interne */"));
        label_10 = new QLabel(pageclients);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(700, 280, 151, 51));
        label_10->setStyleSheet(QString::fromUtf8("    background-color: transparent;    /* Pas de fond */\n"
"    border: none;                     /* Pas de contour */\n"
"    color: black;                     /* Couleur du texte */\n"
"    font-size: 25px;                  /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";/* Police artistique */\n"
"    font-style: italic;               /* Italique */\n"
"    padding: 8px;                     /* Espacement interne */"));
        label_11 = new QLabel(pageclients);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(700, 340, 181, 51));
        label_11->setStyleSheet(QString::fromUtf8("    background-color: transparent;    /* Pas de fond */\n"
"    border: none;                     /* Pas de contour */\n"
"    color: black;                     /* Couleur du texte */\n"
"    font-size: 22px;                  /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";/* Police artistique */\n"
"    font-style: italic;               /* Italique */\n"
"    padding: 8px;                     /* Espacement interne */"));
        label_13 = new QLabel(pageclients);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(710, 460, 151, 51));
        label_13->setStyleSheet(QString::fromUtf8("    background-color: transparent;    /* Pas de fond */\n"
"    border: none;                     /* Pas de contour */\n"
"    color: black;                     /* Couleur du texte */\n"
"    font-size: 25px;                  /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";/* Police artistique */\n"
"    font-style: italic;               /* Italique */\n"
"    padding: 8px;                     /* Espacement interne */"));
        label_14 = new QLabel(pageclients);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(710, 520, 151, 51));
        label_14->setStyleSheet(QString::fromUtf8("    background-color: transparent;    /* Pas de fond */\n"
"    border: none;                     /* Pas de contour */\n"
"    color: black;                     /* Couleur du texte */\n"
"    font-size: 25px;                  /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";/* Police artistique */\n"
"    font-style: italic;               /* Italique */\n"
"    padding: 8px;                     /* Espacement interne */"));
        label_15 = new QLabel(pageclients);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(700, 580, 161, 51));
        label_15->setStyleSheet(QString::fromUtf8("    background-color: transparent;    /* Pas de fond */\n"
"    border: none;                     /* Pas de contour */\n"
"    color: black;                     /* Couleur du texte */\n"
"    font-size: 18px;                  /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";/* Police artistique */\n"
"    font-style: italic;               /* Italique */\n"
"    padding: 8px;                     /* Espacement interne */"));
        label_16 = new QLabel(pageclients);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(700, 400, 161, 51));
        label_16->setStyleSheet(QString::fromUtf8("    background-color: transparent;    /* Pas de fond */\n"
"    border: none;                     /* Pas de contour */\n"
"    color: black;                     /* Couleur du texte */\n"
"    font-size: 18px;                  /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";/* Police artistique */\n"
"    font-style: italic;               /* Italique */\n"
"    padding: 8px;                     /* Espacement interne */"));
        comboBoxGouvernerat = new QComboBox(pageclients);
        comboBoxGouvernerat->addItem(QString());
        comboBoxGouvernerat->addItem(QString());
        comboBoxGouvernerat->addItem(QString());
        comboBoxGouvernerat->addItem(QString());
        comboBoxGouvernerat->addItem(QString());
        comboBoxGouvernerat->addItem(QString());
        comboBoxGouvernerat->setObjectName("comboBoxGouvernerat");
        comboBoxGouvernerat->setGeometry(QRect(860, 410, 201, 31));
        comboBoxGouvernerat->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 15px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        lineEditRecherche = new QLineEdit(pageclients);
        lineEditRecherche->setObjectName("lineEditRecherche");
        lineEditRecherche->setGeometry(QRect(40, 90, 521, 31));
        lineEditRecherche->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 15px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        stackedWidget->addWidget(pageclients);
        label_7->raise();
        label_6->raise();
        pushButton_SMS->raise();
        pushButton_Appel->raise();
        pushButtonStat->raise();
        tri->raise();
        Supprimer->raise();
        Annuler->raise();
        label_5->raise();
        pushButton_22->raise();
        comboBox_2->raise();
        pushButtonPDF->raise();
        tableView_2->raise();
        Confirmer->raise();
        lineEditNom->raise();
        lineEditPrenom->raise();
        lineEditEmail->raise();
        lineEditTelephone->raise();
        lineEditRue->raise();
        lineEditVille->raise();
        lineEditCode->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        label_13->raise();
        label_14->raise();
        label_15->raise();
        label_16->raise();
        comboBoxGouvernerat->raise();
        lineEditRecherche->raise();
        pushButtonClients = new QPushButton(centralWidget);
        pushButtonClients->setObjectName("pushButtonClients");
        pushButtonClients->setGeometry(QRect(20, 180, 229, 44));
        pushButtonClients->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        pushButtonCommandes = new QPushButton(centralWidget);
        pushButtonCommandes->setObjectName("pushButtonCommandes");
        pushButtonCommandes->setGeometry(QRect(20, 280, 229, 44));
        pushButtonCommandes->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(20, 380, 229, 44));
        pushButton_3->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(20, 480, 229, 44));
        pushButton_4->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Gestion des Clients", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "  Gestion de Commandes", nullptr));
        pushButtonStatCommandes->setText(QCoreApplication::translate("MainWindow", "Stats", nullptr));
        label_3->setText(QString());
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Ajout/Modification", nullptr));
        pushButtonPDFCommandes->setText(QCoreApplication::translate("MainWindow", "PDF", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Confirmer", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Annuler", nullptr));
        label_4->setText(QString());
        Supprimer_2->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        pushButtonQR->setText(QCoreApplication::translate("MainWindow", "QR CODE", nullptr));
        pushButtonTODO->setText(QCoreApplication::translate("MainWindow", "TO DO ", nullptr));
        tricommandes->setText(QCoreApplication::translate("MainWindow", "Tri", nullptr));
        comboBoxCommandes->setItemText(0, QCoreApplication::translate("MainWindow", "date_commande", nullptr));
        comboBoxCommandes->setItemText(1, QCoreApplication::translate("MainWindow", "statut", nullptr));
        comboBoxCommandes->setItemText(2, QCoreApplication::translate("MainWindow", "id_client", nullptr));
        comboBoxCommandes->setItemText(3, QCoreApplication::translate("MainWindow", "prix le plus eleve", nullptr));

        label_12->setText(QCoreApplication::translate("MainWindow", "Date ", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Statut", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Prix", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "ID Client", nullptr));
        comboBoxStatut->setItemText(0, QCoreApplication::translate("MainWindow", "En Cours", nullptr));
        comboBoxStatut->setItemText(1, QCoreApplication::translate("MainWindow", "livr\303\251e", nullptr));
        comboBoxStatut->setItemText(2, QCoreApplication::translate("MainWindow", "Annul\303\251", nullptr));
        comboBoxStatut->setItemText(3, QCoreApplication::translate("MainWindow", "En attente", nullptr));

        pushButton_SMS->setText(QCoreApplication::translate("MainWindow", "SMS", nullptr));
        pushButton_Appel->setText(QCoreApplication::translate("MainWindow", "Appel", nullptr));
        pushButtonStat->setText(QCoreApplication::translate("MainWindow", "Stats", nullptr));
        tri->setText(QCoreApplication::translate("MainWindow", "Tri", nullptr));
        Supprimer->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        Annuler->setText(QCoreApplication::translate("MainWindow", "Annuler", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "       Gestion de Clients", nullptr));
        pushButton_22->setText(QCoreApplication::translate("MainWindow", "Ajout/Modification", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "Ville ", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "Gouvernerat ", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "Code postal", nullptr));

        pushButtonPDF->setText(QCoreApplication::translate("MainWindow", "PDF", nullptr));
        Confirmer->setText(QCoreApplication::translate("MainWindow", "Confirmer", nullptr));
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Prenom", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Telephone ", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "RUE", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Ville", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "code postal", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Gouvernerat", nullptr));
        comboBoxGouvernerat->setItemText(0, QCoreApplication::translate("MainWindow", "Tunis", nullptr));
        comboBoxGouvernerat->setItemText(1, QCoreApplication::translate("MainWindow", "Ariana", nullptr));
        comboBoxGouvernerat->setItemText(2, QCoreApplication::translate("MainWindow", "Ben Arous", nullptr));
        comboBoxGouvernerat->setItemText(3, QCoreApplication::translate("MainWindow", "Bizerte", nullptr));
        comboBoxGouvernerat->setItemText(4, QCoreApplication::translate("MainWindow", "Mahdia", nullptr));
        comboBoxGouvernerat->setItemText(5, QCoreApplication::translate("MainWindow", "Monastir", nullptr));

        pushButtonClients->setText(QCoreApplication::translate("MainWindow", "Clients", nullptr));
        pushButtonCommandes->setText(QCoreApplication::translate("MainWindow", "Commandes", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Vehicules", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Livreurs", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
