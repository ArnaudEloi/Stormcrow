#include "fichierloader.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include "mainwindow.h"

fichierLoader::fichierLoader(QWidget *parent)
{
}

void fichierLoader::rappelOk(bool value)
{
    rapOk=value;
    this->ecrire();
}

void fichierLoader::charger(QWidget *parent)
{

    QFile file("shadowfax");
         if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
             return;
         while (!file.atEnd()) {
             QByteArray line = file.readLine();
             qDebug()<<line;
         if(line=="1\n")
         {
             //cocher la case
             ((MainWindow*)parent)->cocherCB();
         }
         else
         {
             //décocher la case
             ((MainWindow*)parent)->decocherCB();
         }
     }
}

void fichierLoader::ecrire()
{
    QFile file("shadowfax");
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
            return;

        QTextStream out(&file);
        if(rapOk)
            out <<1<<"\n";
        else
            out <<0<<"\n";

     //   out<<((MainWindow*)par)
}
