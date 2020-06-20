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
#include "EntryAdderView.h"

//Registro di attività che memorizza cosa si è fatto durante una giornata.
//Classe che rappresenta attività con descrizione, tempo inizio e fine, Classe registro che colleziona attività su base del giorno.
//Interfaccia semplice per mostrare il registro sulla base di un giorno
class MainWindow : public QMainWindow, public Observer {
Q_OBJECT
public:
    MainWindow(ControllerMain* c, ModelMain* m, QWidget* parent = nullptr);
    virtual ~MainWindow();


    void updateCategories(const std::string& n) override;
    void clearCatList() override;

    void updateActivities(const std::string& n) override;
    void clearActList();
    void refreshActList();

    std::string getCategoryName() const;
    std::string getActivityName() const;
    void resetButtons();
    /*
     * when pressed opens the EntryAddedView that works just like the others
     * it adds the activity just like the others.
     * the problem is how do I remove them
     *
     */
private:
    Ui_MainWindow* ui;
    ControllerMain* controller;
    ModelMain* model;

private slots:
    void showCategoryAdder();
    void onRemoveCategoryButton();
    void onCategoryPressed();
    void onActivityPressed();
    void onRemoveActivityButton();
    void onAddActivity();
    void onAddEntry();
};

#endif //EXAM_PROJECT_MAINWINDOW_H
