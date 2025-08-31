/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
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
#include <QtWidgets/QTextEdit>
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
    QPushButton *pushButton_7;
    QLabel *label_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QLabel *label_4;
    QTextEdit *textEdit;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QComboBox *comboBox;
    QLineEdit *lineEditNomPrix;
    QLabel *label_12;
    QLabel *label_17;
    QLabel *label_19;
    QLabel *label_20;
    QLineEdit *lineEditNomID;
    QComboBox *comboBoxGouvernerat_2;
    QDateEdit *dateEdit;
    QWidget *page_2;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButtonStat;
    QPushButton *pushButton_19;
    QPushButton *Supprimer;
    QPushButton *Annuler;
    QLabel *label_5;
    QPushButton *pushButton_22;
    QComboBox *comboBox_2;
    QPushButton *pushButton_23;
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
    QPushButton *pushButton_6;
    QPushButton *pushButton_2;
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
        label->setStyleSheet(QString::fromUtf8("    background-color: #FFD6E7;   /* Fond rose pastel */\n"
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
"    background-color: #FFD6E7;   /* Fond rose pastel */\n"
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
        pushButton_7 = new QPushButton(pagecommande);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(190, 630, 151, 31));
        pushButton_7->setStyleSheet(QString::fromUtf8("\n"
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
        label_3->setStyleSheet(QString::fromUtf8("    background-color: #FFD6E7;   /* Fond rose pastel */\n"
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
        pushButton_9 = new QPushButton(pagecommande);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(20, 630, 151, 31));
        pushButton_9->setStyleSheet(QString::fromUtf8("\n"
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
        label_4->setStyleSheet(QString::fromUtf8("    background-color: #FFD6E7;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 16px;            /* Taille du texte */\n"
"    padding: 5px;               /* Espacement interne */"));
        textEdit = new QTextEdit(pagecommande);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(40, 100, 521, 31));
        textEdit->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 15px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */"));
        pushButton_12 = new QPushButton(pagecommande);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(570, 100, 101, 31));
        pushButton_12->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 15px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        pushButton_13 = new QPushButton(pagecommande);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(360, 630, 151, 31));
        pushButton_13->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        pushButton_14 = new QPushButton(pagecommande);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(530, 630, 151, 31));
        pushButton_14->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        pushButton_15 = new QPushButton(pagecommande);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setGeometry(QRect(20, 550, 151, 31));
        pushButton_15->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        comboBox = new QComboBox(pagecommande);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(200, 550, 471, 31));
        comboBox->setStyleSheet(QString::fromUtf8("\n"
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
        comboBoxGouvernerat_2 = new QComboBox(pagecommande);
        comboBoxGouvernerat_2->addItem(QString());
        comboBoxGouvernerat_2->addItem(QString());
        comboBoxGouvernerat_2->addItem(QString());
        comboBoxGouvernerat_2->addItem(QString());
        comboBoxGouvernerat_2->setObjectName("comboBoxGouvernerat_2");
        comboBoxGouvernerat_2->setGeometry(QRect(860, 300, 201, 41));
        comboBoxGouvernerat_2->setStyleSheet(QString::fromUtf8("\n"
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
        stackedWidget->addWidget(pagecommande);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        pushButton_16 = new QPushButton(page_2);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setGeometry(QRect(530, 620, 151, 41));
        pushButton_16->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        pushButton_17 = new QPushButton(page_2);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setGeometry(QRect(360, 620, 151, 41));
        pushButton_17->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        pushButtonStat = new QPushButton(page_2);
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
        pushButton_19 = new QPushButton(page_2);
        pushButton_19->setObjectName("pushButton_19");
        pushButton_19->setGeometry(QRect(20, 540, 151, 31));
        pushButton_19->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        Supprimer = new QPushButton(page_2);
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
        Annuler = new QPushButton(page_2);
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
        label_5 = new QLabel(page_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(300, 10, 331, 51));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #FFD6E7;   /* Fond rose pastel */\n"
"    border: 2px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
"}"));
        pushButton_22 = new QPushButton(page_2);
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
        comboBox_2 = new QComboBox(page_2);
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
        pushButton_23 = new QPushButton(page_2);
        pushButton_23->setObjectName("pushButton_23");
        pushButton_23->setGeometry(QRect(20, 620, 151, 41));
        pushButton_23->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        tableView_2 = new QTableView(page_2);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setGeometry(QRect(20, 150, 651, 371));
        Confirmer = new QPushButton(page_2);
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
        label_6 = new QLabel(page_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 80, 661, 51));
        label_6->setStyleSheet(QString::fromUtf8("    background-color: #FFD6E7;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 16px;            /* Taille du texte */\n"
"    padding: 5px;               /* Espacement interne */"));
        label_7 = new QLabel(page_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(700, 80, 371, 651));
        label_7->setStyleSheet(QString::fromUtf8("    background-color: #FFD6E7;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 16px;            /* Taille du texte */\n"
"    padding: 5px;               /* Espacement interne */"));
        lineEditNom = new QLineEdit(page_2);
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
        lineEditPrenom = new QLineEdit(page_2);
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
        lineEditEmail = new QLineEdit(page_2);
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
        lineEditTelephone = new QLineEdit(page_2);
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
        lineEditRue = new QLineEdit(page_2);
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
        lineEditVille = new QLineEdit(page_2);
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
        lineEditCode = new QLineEdit(page_2);
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
        label_8 = new QLabel(page_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(700, 160, 151, 51));
        label_8->setStyleSheet(QString::fromUtf8("    background-color: transparent;    /* Pas de fond */\n"
"    border: none;                     /* Pas de contour */\n"
"    color: black;                     /* Couleur du texte */\n"
"    font-size: 25px;                  /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";/* Police artistique */\n"
"    font-style: italic;               /* Italique */\n"
"    padding: 8px;                     /* Espacement interne */"));
        label_9 = new QLabel(page_2);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(690, 220, 151, 51));
        label_9->setStyleSheet(QString::fromUtf8("    background-color: transparent;    /* Pas de fond */\n"
"    border: none;                     /* Pas de contour */\n"
"    color: black;                     /* Couleur du texte */\n"
"    font-size: 25px;                  /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";/* Police artistique */\n"
"    font-style: italic;               /* Italique */\n"
"    padding: 8px;                     /* Espacement interne */"));
        label_10 = new QLabel(page_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(700, 280, 151, 51));
        label_10->setStyleSheet(QString::fromUtf8("    background-color: transparent;    /* Pas de fond */\n"
"    border: none;                     /* Pas de contour */\n"
"    color: black;                     /* Couleur du texte */\n"
"    font-size: 25px;                  /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";/* Police artistique */\n"
"    font-style: italic;               /* Italique */\n"
"    padding: 8px;                     /* Espacement interne */"));
        label_11 = new QLabel(page_2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(700, 340, 181, 51));
        label_11->setStyleSheet(QString::fromUtf8("    background-color: transparent;    /* Pas de fond */\n"
"    border: none;                     /* Pas de contour */\n"
"    color: black;                     /* Couleur du texte */\n"
"    font-size: 22px;                  /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";/* Police artistique */\n"
"    font-style: italic;               /* Italique */\n"
"    padding: 8px;                     /* Espacement interne */"));
        label_13 = new QLabel(page_2);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(710, 460, 151, 51));
        label_13->setStyleSheet(QString::fromUtf8("    background-color: transparent;    /* Pas de fond */\n"
"    border: none;                     /* Pas de contour */\n"
"    color: black;                     /* Couleur du texte */\n"
"    font-size: 25px;                  /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";/* Police artistique */\n"
"    font-style: italic;               /* Italique */\n"
"    padding: 8px;                     /* Espacement interne */"));
        label_14 = new QLabel(page_2);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(710, 520, 151, 51));
        label_14->setStyleSheet(QString::fromUtf8("    background-color: transparent;    /* Pas de fond */\n"
"    border: none;                     /* Pas de contour */\n"
"    color: black;                     /* Couleur du texte */\n"
"    font-size: 25px;                  /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";/* Police artistique */\n"
"    font-style: italic;               /* Italique */\n"
"    padding: 8px;                     /* Espacement interne */"));
        label_15 = new QLabel(page_2);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(700, 580, 161, 51));
        label_15->setStyleSheet(QString::fromUtf8("    background-color: transparent;    /* Pas de fond */\n"
"    border: none;                     /* Pas de contour */\n"
"    color: black;                     /* Couleur du texte */\n"
"    font-size: 18px;                  /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";/* Police artistique */\n"
"    font-style: italic;               /* Italique */\n"
"    padding: 8px;                     /* Espacement interne */"));
        label_16 = new QLabel(page_2);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(700, 400, 161, 51));
        label_16->setStyleSheet(QString::fromUtf8("    background-color: transparent;    /* Pas de fond */\n"
"    border: none;                     /* Pas de contour */\n"
"    color: black;                     /* Couleur du texte */\n"
"    font-size: 18px;                  /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";/* Police artistique */\n"
"    font-style: italic;               /* Italique */\n"
"    padding: 8px;                     /* Espacement interne */"));
        comboBoxGouvernerat = new QComboBox(page_2);
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
        lineEditRecherche = new QLineEdit(page_2);
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
        stackedWidget->addWidget(page_2);
        label_7->raise();
        label_6->raise();
        pushButton_16->raise();
        pushButton_17->raise();
        pushButtonStat->raise();
        pushButton_19->raise();
        Supprimer->raise();
        Annuler->raise();
        label_5->raise();
        pushButton_22->raise();
        comboBox_2->raise();
        pushButton_23->raise();
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
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(20, 180, 229, 44));
        pushButton_6->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FCFCFC;   /* Fond rose pastel */\n"
"    border: 1px solid black;    /* Contour noir */\n"
"    border-radius: 8px;         /* Coins l\303\251g\303\250rement arrondis */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 20px;            /* Taille du texte */\n"
"    font-family: \"Lucida Handwriting\";  /* Police artistique */\n"
"    font-style: italic;         /* Optionnel : style italique */\n"
"    padding: 8px;               /* Espacement interne */\n"
""));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 280, 229, 44));
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
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
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Stats", nullptr));
        label_3->setText(QString());
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Ajout/Modification", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "PDF", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Confirmer", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Annuler", nullptr));
        label_4->setText(QString());
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "QR CODE", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "MAILING", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "Tri", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "date", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "client", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "prix le plus eleve", nullptr));

        label_12->setText(QCoreApplication::translate("MainWindow", "Date ", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Statut", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Prix", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "ID Client", nullptr));
        comboBoxGouvernerat_2->setItemText(0, QCoreApplication::translate("MainWindow", "En Cours", nullptr));
        comboBoxGouvernerat_2->setItemText(1, QCoreApplication::translate("MainWindow", "livr\303\251e", nullptr));
        comboBoxGouvernerat_2->setItemText(2, QCoreApplication::translate("MainWindow", "Annul\303\251", nullptr));
        comboBoxGouvernerat_2->setItemText(3, QCoreApplication::translate("MainWindow", "En attente", nullptr));

        pushButton_16->setText(QCoreApplication::translate("MainWindow", "SMS", nullptr));
        pushButton_17->setText(QCoreApplication::translate("MainWindow", "Appel", nullptr));
        pushButtonStat->setText(QCoreApplication::translate("MainWindow", "Stats", nullptr));
        pushButton_19->setText(QCoreApplication::translate("MainWindow", "Tri", nullptr));
        Supprimer->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        Annuler->setText(QCoreApplication::translate("MainWindow", "Annuler", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "       Gestion de Clients", nullptr));
        pushButton_22->setText(QCoreApplication::translate("MainWindow", "Ajout/Modification", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "date", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "client", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "prix le plus eleve", nullptr));

        pushButton_23->setText(QCoreApplication::translate("MainWindow", "PDF", nullptr));
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

        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Clients", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Commandes", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Vehicules", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Livreurs", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
