#ifndef FICHIERLOADER_H
#define FICHIERLOADER_H

#include <mainwindow.h>
#include <ui_mainwindow.h>
#include <QWidget>

class fichierLoader
{
public:
    fichierLoader(QWidget *parent = 0);
    void charger(QWidget *parent = 0);
    void creer();
    void ecrire();
    void rappelOk(bool);
    bool rapOk;
};

#endif // FICHIERLOADER_H
