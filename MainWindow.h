//
// Created by Andrea on 3/28/2020.
//

#ifndef EXAM_PROJECT_MAINWINDOW_H
#define EXAM_PROJECT_MAINWINDOW_H


#include <QMainWindow>
#include "Ui_MainWindow.h"
#include <iostream>
#include "CategoryAdderView.h"
#include "Category.h"
#include "Observer.h"

//Registro di attività che memorizza cosa si è fatto durante una giornata.
//Classe che rappresenta attività con descrizione, tempo inizio e fine, Classe registro che colleziona attività su base del giorno.
//Interfaccia semplice per mostrare il registro sulla base di un giorno
class MainWindow : public QMainWindow, public Observer {
Q_OBJECT
public:
    explicit MainWindow(QWidget* parent = nullptr);
    virtual ~MainWindow();

    void createCategory(std::string name);
private:
    Ui_MainWindow* ui;
    std::list<Category> catList;
private slots:
    void createAdder();

};

#endif //EXAM_PROJECT_MAINWINDOW_H
