#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "fichierloader.h"
#include <QTextCodec>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEditMDP->setEchoMode(QLineEdit::Password);
    ui->tabWidget->setCurrentIndex(0);
    ui->tabWidget->setTabEnabled(1,false);

this->chargerLesParametres();

}

void MainWindow::chargerLesParametres()
{
    // charger les parametres du fichier
    ((fichierLoader*)parent())->charger();
}

void MainWindow::cocherCB()
{
    /// il veux pas !
 //   ui->checkBox->setChecked(true);
}

void MainWindow::decocherCB()
{
 //   ui->checkBox->setChecked(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::connexionBase()
{
    // prise en compte de l'utf8 pour les chaine en dur pour le code
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    // connexion à la base
    base= QSqlDatabase::addDatabase("QMYSQL");
    base.setHostName(ui->lineEditAdresse->text());
    base.setUserName(ui->lineEditUser->text());
    base.setPassword(ui->lineEditMDP->text());
    base.setPort(ui->lineEditPort->text().toInt());
    if(base.open())
    {
        ui->statusBar->showMessage("wait...");
        ui->statusBar->showMessage(base.hostName()+" > "+base.userName());
        this->chargerListeDatabases();
    }
    else
    {
        ui->statusBar->showMessage("Echec de connexion");
    }
}
void MainWindow::on_pushButton_clicked()
{
    this->connexionBase();
    ui->tabWidget->setTabEnabled(1,false);
}

void MainWindow::chargerListeDatabases()
{
    ui->listWidgetDatabases->clear();
    QSqlQuery req("show databases");
    while(req.next())
    {
        ui->listWidgetDatabases->addItem(req.value(0).toString());
    }
}


void MainWindow::on_listWidgetDatabases_clicked(QModelIndex index)
{
    base.setDatabaseName(ui->listWidgetDatabases->currentItem()->text());
    base.exec("use "+ui->listWidgetDatabases->currentItem()->text());
    ui->statusBar->showMessage(base.hostName()+" > "+base.userName()+" > "+base.databaseName());
    this->chargerListeTables();

    ui->tabWidget->setTabEnabled(1,true);

    ui->tabWidget->setCurrentIndex(1);
    ui->toolBoxTable->setCurrentIndex(0);
}

void MainWindow::chargerListeTables()
{
    ui->listWidgetTables->clear();
    QSqlQuery req("show tables");
    while(req.next())
    {
        ui->listWidgetTables->addItem(req.value(0).toString());
    }
}

void MainWindow::on_listWidgetTables_clicked(QModelIndex index)
{
    // structure
    ui->tableWidgetTableDescription->clear();
    ui->statusBar->showMessage(base.hostName()+" > "+base.userName()+" > "+base.databaseName()+" > "+ui->listWidgetTables->currentItem()->text());
    QSqlQuery req("desc "+ui->listWidgetTables->currentItem()->text());
    int row=0;

    while(req.next())
    {
        ui->tableWidgetTableDescription->removeRow(row);
        ui->tableWidgetTableDescription->insertRow(row);
        ui->tableWidgetTableDescription->setItem(row,0,new QTableWidgetItem(req.value(0).toString()));
        ui->tableWidgetTableDescription->setItem(row,1,new QTableWidgetItem(req.value(1).toString()));
        ui->tableWidgetTableDescription->setItem(row,2,new QTableWidgetItem(req.value(2).toString()));
        ui->tableWidgetTableDescription->setItem(row,3,new QTableWidgetItem(req.value(3).toString()));
        ui->tableWidgetTableDescription->setItem(row,4,new QTableWidgetItem(req.value(4).toString()));
        ui->tableWidgetTableDescription->setItem(row,5,new QTableWidgetItem(req.value(5).toString()));
        row++;
    }

    // contenu
    modelTableContenu=new QSqlTableModel(this);
    modelTableContenu->setTable(ui->listWidgetTables->currentItem()->text());
    ui->labelRappelTable->setText(ui->listWidgetTables->currentItem()->text());
    modelTableContenu->setEditStrategy(QSqlTableModel::OnRowChange);
    modelTableContenu->select();
    ui->tableViewContenu->setModel(modelTableContenu);
}


void MainWindow::on_pushButtonExecReq_clicked()
{
    modelRequete=new QSqlQueryModel(this);
    modelRequete->setQuery(ui->textEditReq->toPlainText());
    if(modelRequete->lastError().text()==" ")
    {
        ui->stackedWidgetReq->setCurrentIndex(0);
        ui->tableViewResultatReq->setModel(modelRequete);
    }
    else
    {
        ui->stackedWidgetReq->setCurrentIndex(1);
        ui->textEditReqError->setText(modelRequete->lastError().text());
    }
    ui->toolBoxReq->setCurrentIndex(1);
}


void MainWindow::on_textEditReq_selectionChanged()
{
        if(ui->textEditReq->toPlainText()=="Entrez votre requete ici ....")
        {
            ui->textEditReq->clear();   
        }

}

void MainWindow::on_pushButtonScriptParcourir_clicked()
{
    QString fileName=QFileDialog::getOpenFileName(this,"Ajouter un script","/home/","*.sql");
    QFile fichier(fileName);
    fichier.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream flux(&fichier);
    ui->textEditScript->setText(flux.readAll());
    ui->lineEditAdresseScript->setText(fileName);
}


void MainWindow::on_pushButtonExecScript_clicked()
{
    modelRequete=new QSqlQueryModel(this);
    modelRequete->setQuery(ui->textEditScript->toPlainText());
    if(modelRequete->lastError().text()==" ")
    {
        ui->textEditScriptResultat->setText("Bravo! Script exécuté avec succès!");
    }
    else
    {
        ui->textEditScriptResultat->setText(modelRequete->lastError().text());
    }
    ui->toolBoxScript->setCurrentIndex(1);
}


void MainWindow::on_checkBox_clicked()
{
    fichierLoader load;
    if(ui->checkBox->isChecked())
    {
        load.rappelOk(true);
    }
    else
    {
        load.rappelOk(false);
    }
}
