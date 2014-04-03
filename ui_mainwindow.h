/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Nov 19 15:26:09 2013
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QToolBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QListWidget *listWidgetDatabases;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *lineEditAdresse;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEditPort;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditUser;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEditMDP;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QCheckBox *checkBox;
    QWidget *tab_2;
    QGridLayout *gridLayout_7;
    QToolBox *toolBoxTable;
    QWidget *page_3;
    QGridLayout *gridLayout_5;
    QListWidget *listWidgetTables;
    QWidget *page_7;
    QGridLayout *gridLayout_6;
    QTableWidget *tableWidgetTableDescription;
    QWidget *page_4;
    QGridLayout *gridLayout_13;
    QLabel *labelRappelTable;
    QTableView *tableViewContenu;
    QWidget *tab_3;
    QGridLayout *gridLayout_9;
    QToolBox *toolBoxReq;
    QWidget *page;
    QGridLayout *gridLayout_10;
    QTextEdit *textEditReq;
    QPushButton *pushButtonExecReq;
    QSpacerItem *horizontalSpacer_3;
    QWidget *page_2;
    QGridLayout *gridLayout_11;
    QStackedWidget *stackedWidgetReq;
    QWidget *page_8;
    QGridLayout *gridLayout_12;
    QTableView *tableViewResultatReq;
    QWidget *page_9;
    QGridLayout *gridLayout_16;
    QTextEdit *textEditReqError;
    QWidget *tab_4;
    QGridLayout *gridLayout_8;
    QToolBox *toolBoxScript;
    QWidget *page_5;
    QGridLayout *gridLayout_14;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEditAdresseScript;
    QPushButton *pushButtonScriptParcourir;
    QTextEdit *textEditScript;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonExecScript;
    QWidget *page_6;
    QGridLayout *gridLayout_15;
    QTextEdit *textEditScriptResultat;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(681, 510);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/StormCrowIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        listWidgetDatabases = new QListWidget(groupBox_2);
        listWidgetDatabases->setObjectName(QString::fromUtf8("listWidgetDatabases"));
        listWidgetDatabases->setAlternatingRowColors(true);

        gridLayout_2->addWidget(listWidgetDatabases, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(300, 0));
        groupBox->setMaximumSize(QSize(300, 16777215));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        lineEditAdresse = new QLineEdit(groupBox);
        lineEditAdresse->setObjectName(QString::fromUtf8("lineEditAdresse"));

        horizontalLayout_4->addWidget(lineEditAdresse);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEditPort = new QLineEdit(groupBox);
        lineEditPort->setObjectName(QString::fromUtf8("lineEditPort"));
        lineEditPort->setMaximumSize(QSize(100, 16777215));
        lineEditPort->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lineEditPort);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_3);


        gridLayout_4->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEditUser = new QLineEdit(groupBox);
        lineEditUser->setObjectName(QString::fromUtf8("lineEditUser"));

        horizontalLayout_2->addWidget(lineEditUser);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        lineEditMDP = new QLineEdit(groupBox);
        lineEditMDP->setObjectName(QString::fromUtf8("lineEditMDP"));

        horizontalLayout->addWidget(lineEditMDP);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout_4->addLayout(verticalLayout, 1, 0, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_4->addWidget(pushButton, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 4, 0, 1, 1);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout_4->addWidget(checkBox, 2, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_7 = new QGridLayout(tab_2);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        toolBoxTable = new QToolBox(tab_2);
        toolBoxTable->setObjectName(QString::fromUtf8("toolBoxTable"));
        toolBoxTable->setStyleSheet(QString::fromUtf8(""));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 641, 288));
        gridLayout_5 = new QGridLayout(page_3);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        listWidgetTables = new QListWidget(page_3);
        listWidgetTables->setObjectName(QString::fromUtf8("listWidgetTables"));
        listWidgetTables->setAlternatingRowColors(true);

        gridLayout_5->addWidget(listWidgetTables, 0, 0, 1, 2);

        toolBoxTable->addItem(page_3, QString::fromUtf8("Tables et Vues"));
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        gridLayout_6 = new QGridLayout(page_7);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        tableWidgetTableDescription = new QTableWidget(page_7);
        if (tableWidgetTableDescription->columnCount() < 6)
            tableWidgetTableDescription->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetTableDescription->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetTableDescription->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetTableDescription->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetTableDescription->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetTableDescription->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font);
        tableWidgetTableDescription->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidgetTableDescription->setObjectName(QString::fromUtf8("tableWidgetTableDescription"));
        tableWidgetTableDescription->setAlternatingRowColors(true);
        tableWidgetTableDescription->setSelectionMode(QAbstractItemView::NoSelection);

        gridLayout_6->addWidget(tableWidgetTableDescription, 0, 0, 1, 1);

        toolBoxTable->addItem(page_7, QString::fromUtf8("Structure"));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        page_4->setGeometry(QRect(0, 0, 641, 288));
        gridLayout_13 = new QGridLayout(page_4);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        labelRappelTable = new QLabel(page_4);
        labelRappelTable->setObjectName(QString::fromUtf8("labelRappelTable"));

        gridLayout_13->addWidget(labelRappelTable, 0, 0, 1, 1);

        tableViewContenu = new QTableView(page_4);
        tableViewContenu->setObjectName(QString::fromUtf8("tableViewContenu"));
        tableViewContenu->setAlternatingRowColors(true);
        tableViewContenu->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewContenu->horizontalHeader()->setStretchLastSection(true);
        tableViewContenu->verticalHeader()->setVisible(false);

        gridLayout_13->addWidget(tableViewContenu, 1, 0, 1, 1);

        toolBoxTable->addItem(page_4, QString::fromUtf8("Contenu"));

        gridLayout_7->addWidget(toolBoxTable, 1, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_9 = new QGridLayout(tab_3);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        toolBoxReq = new QToolBox(tab_3);
        toolBoxReq->setObjectName(QString::fromUtf8("toolBoxReq"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 641, 319));
        gridLayout_10 = new QGridLayout(page);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        textEditReq = new QTextEdit(page);
        textEditReq->setObjectName(QString::fromUtf8("textEditReq"));

        gridLayout_10->addWidget(textEditReq, 0, 0, 1, 2);

        pushButtonExecReq = new QPushButton(page);
        pushButtonExecReq->setObjectName(QString::fromUtf8("pushButtonExecReq"));

        gridLayout_10->addWidget(pushButtonExecReq, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        toolBoxReq->addItem(page, QString::fromUtf8("Requete"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 641, 319));
        gridLayout_11 = new QGridLayout(page_2);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        stackedWidgetReq = new QStackedWidget(page_2);
        stackedWidgetReq->setObjectName(QString::fromUtf8("stackedWidgetReq"));
        page_8 = new QWidget();
        page_8->setObjectName(QString::fromUtf8("page_8"));
        gridLayout_12 = new QGridLayout(page_8);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        tableViewResultatReq = new QTableView(page_8);
        tableViewResultatReq->setObjectName(QString::fromUtf8("tableViewResultatReq"));

        gridLayout_12->addWidget(tableViewResultatReq, 0, 0, 1, 1);

        stackedWidgetReq->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName(QString::fromUtf8("page_9"));
        gridLayout_16 = new QGridLayout(page_9);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        textEditReqError = new QTextEdit(page_9);
        textEditReqError->setObjectName(QString::fromUtf8("textEditReqError"));
        textEditReqError->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));

        gridLayout_16->addWidget(textEditReqError, 0, 0, 1, 1);

        stackedWidgetReq->addWidget(page_9);

        gridLayout_11->addWidget(stackedWidgetReq, 0, 0, 1, 1);

        toolBoxReq->addItem(page_2, QString::fromUtf8("Affichage"));

        gridLayout_9->addWidget(toolBoxReq, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_8 = new QGridLayout(tab_4);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        toolBoxScript = new QToolBox(tab_4);
        toolBoxScript->setObjectName(QString::fromUtf8("toolBoxScript"));
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        page_5->setGeometry(QRect(0, 0, 641, 319));
        gridLayout_14 = new QGridLayout(page_5);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lineEditAdresseScript = new QLineEdit(page_5);
        lineEditAdresseScript->setObjectName(QString::fromUtf8("lineEditAdresseScript"));
        lineEditAdresseScript->setFrame(false);

        horizontalLayout_5->addWidget(lineEditAdresseScript);

        pushButtonScriptParcourir = new QPushButton(page_5);
        pushButtonScriptParcourir->setObjectName(QString::fromUtf8("pushButtonScriptParcourir"));

        horizontalLayout_5->addWidget(pushButtonScriptParcourir);


        gridLayout_14->addLayout(horizontalLayout_5, 0, 0, 1, 2);

        textEditScript = new QTextEdit(page_5);
        textEditScript->setObjectName(QString::fromUtf8("textEditScript"));

        gridLayout_14->addWidget(textEditScript, 1, 0, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(529, 24, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_4, 2, 0, 1, 1);

        pushButtonExecScript = new QPushButton(page_5);
        pushButtonExecScript->setObjectName(QString::fromUtf8("pushButtonExecScript"));

        gridLayout_14->addWidget(pushButtonExecScript, 2, 1, 1, 1);

        toolBoxScript->addItem(page_5, QString::fromUtf8("Script"));
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        page_6->setGeometry(QRect(0, 0, 641, 319));
        gridLayout_15 = new QGridLayout(page_6);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        textEditScriptResultat = new QTextEdit(page_6);
        textEditScriptResultat->setObjectName(QString::fromUtf8("textEditScriptResultat"));

        gridLayout_15->addWidget(textEditScriptResultat, 0, 0, 1, 1);

        toolBoxScript->addItem(page_6, QString::fromUtf8("R\303\251sultat"));

        gridLayout_8->addWidget(toolBoxScript, 0, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 681, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        toolBoxTable->setCurrentIndex(2);
        toolBoxReq->setCurrentIndex(0);
        stackedWidgetReq->setCurrentIndex(1);
        toolBoxScript->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MySQL StormCrow", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Bases de donn\303\251es:", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Parametres de connexion:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Adresse du serveur:", 0, QApplication::UnicodeUTF8));
        lineEditAdresse->setText(QApplication::translate("MainWindow", "localhost", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Port:", 0, QApplication::UnicodeUTF8));
        lineEditPort->setText(QApplication::translate("MainWindow", "3306", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Utilisateur:", 0, QApplication::UnicodeUTF8));
        lineEditUser->setText(QApplication::translate("MainWindow", "arnaud", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Mot de passe:", 0, QApplication::UnicodeUTF8));
        lineEditMDP->setText(QApplication::translate("MainWindow", "ini01", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Connection", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("MainWindow", "Se souvenir de moi", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Connection", 0, QApplication::UnicodeUTF8));
        toolBoxTable->setItemText(toolBoxTable->indexOf(page_3), QApplication::translate("MainWindow", "Tables et Vues", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetTableDescription->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Champs", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetTableDescription->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Nouvelle colonne", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetTableDescription->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Nouvelle colonne", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetTableDescription->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Nouvelle colonne", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetTableDescription->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Nouvelle colonne", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetTableDescription->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Type", 0, QApplication::UnicodeUTF8));
        toolBoxTable->setItemText(toolBoxTable->indexOf(page_7), QApplication::translate("MainWindow", "Structure", 0, QApplication::UnicodeUTF8));
        labelRappelTable->setText(QString());
        toolBoxTable->setItemText(toolBoxTable->indexOf(page_4), QApplication::translate("MainWindow", "Contenu", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tables et vues", 0, QApplication::UnicodeUTF8));
        textEditReq->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">Entrez votre requete ici ....</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButtonExecReq->setText(QApplication::translate("MainWindow", "Ex\303\251cuter", 0, QApplication::UnicodeUTF8));
        toolBoxReq->setItemText(toolBoxReq->indexOf(page), QApplication::translate("MainWindow", "Requete", 0, QApplication::UnicodeUTF8));
        toolBoxReq->setItemText(toolBoxReq->indexOf(page_2), QApplication::translate("MainWindow", "Affichage", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Requete", 0, QApplication::UnicodeUTF8));
        pushButtonScriptParcourir->setText(QApplication::translate("MainWindow", "Parcourir", 0, QApplication::UnicodeUTF8));
        pushButtonExecScript->setText(QApplication::translate("MainWindow", "Ex\303\251cuter", 0, QApplication::UnicodeUTF8));
        toolBoxScript->setItemText(toolBoxScript->indexOf(page_5), QApplication::translate("MainWindow", "Script", 0, QApplication::UnicodeUTF8));
        toolBoxScript->setItemText(toolBoxScript->indexOf(page_6), QApplication::translate("MainWindow", "R\303\251sultat", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Script", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
