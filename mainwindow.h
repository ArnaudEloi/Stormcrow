#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QModelIndex>
#include <QSqlTableModel>
#include <QFileDialog>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Ui::MainWindow *ui;
    void chargerLesParametres();
    void cocherCB();
    void decocherCB();

protected:
    void changeEvent(QEvent *e);

private:
    QSqlDatabase base;
    void connexionBase();
    void chargerListeDatabases();
    void chargerListeTables();
    void chargerDescTable();
    QSqlTableModel * modelTableContenu;
    QSqlQueryModel * modelRequete;
    QFile fichier;

private slots:
    void on_checkBox_clicked();
    void on_pushButtonExecScript_clicked();
    void on_pushButtonScriptParcourir_clicked();
    void on_textEditReq_selectionChanged();
    void on_pushButtonExecReq_clicked();
    void on_listWidgetTables_clicked(QModelIndex index);
    void on_listWidgetDatabases_clicked(QModelIndex index);
    void on_pushButton_clicked();
};

#endif // MAINWINDOW_H
