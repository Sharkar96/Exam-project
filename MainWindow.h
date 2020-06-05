//
// Created by Andrea on 3/28/2020.
//

#ifndef EXAM_PROJECT_MAINWINDOW_H
#define EXAM_PROJECT_MAINWINDOW_H


#include <QMainWindow>
#include "Ui_MainWindow.h"
#include <iostream>
#include "CategoryAdderView.h"
#include "ActivityAdderView.h"
#include "Category.h"
#include "Observer.h"
#include "ControllerMain.h"
#include "ModelMain.h"

//Registro di attività che memorizza cosa si è fatto durante una giornata.
//Classe che rappresenta attività con descrizione, tempo inizio e fine, Classe registro che colleziona attività su base del giorno.
//Interfaccia semplice per mostrare il registro sulla base di un giorno
class MainWindow : public QMainWindow, public Observer {
Q_OBJECT
public:
    explicit MainWindow(ControllerMain* c, ModelMain* m, QWidget* parent = nullptr);
    virtual ~MainWindow();


    void updateCategories(const std::string& n) override;
    void clearCatList() override;

    void updateActivities(const std::string& n) override;
    void clearActList() override;

    std::string getCategoryName() const;
private:
    Ui_MainWindow* ui;
    ControllerMain* controller;
    ModelMain* model;


private slots:
    void showCategoryAdder();
//FIXME removing the last category crashes everything
    void onRemoveCategoryButton();
    void onCategoryPressed();
    void onRemoveActivityButton();
    void onAddActivity();

};

#endif //EXAM_PROJECT_MAINWINDOW_H
