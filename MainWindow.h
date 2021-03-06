//
// Created by Andrea on 3/28/2020.
//

#ifndef EXAM_PROJECT_MAINWINDOW_H
#define EXAM_PROJECT_MAINWINDOW_H


#include "Ui_MainWindow.h"
#include <iostream>
#include <QMainWindow>
#include <QtCharts>
#include "CategoryAdderView.h"
#include "ActivityAdderView.h"
#include "Category.h"
#include "ListObserverInterface.h"
#include "ControllerMain.h"
#include "ModelMain.h"
#include "EntryAdderView.h"
#include "EntryViewerView.h"



//Registro di attività che memorizza cosa si è fatto durante una giornata.
//Classe che rappresenta attività con descrizione, tempo inizio e fine, Classe registro che colleziona attività su base del giorno.
//Interfaccia semplice per mostrare il registro sulla base di un giorno

class MainWindow : public QMainWindow, public ListObserverInterface {
Q_OBJECT
public:
    MainWindow(ControllerMain* c, ModelMain* m, QWidget* parent = nullptr);
    virtual ~MainWindow();


    void update(Subject* s, const std::string& n) override;
    void clear() override;

    void update() override;
    void addSubject(Subject* s) override;
    void removeSubject(Subject* s) override;

    void refreshActList();
    void updateActivityInfo();

    std::string getCategoryName() const;
    std::string getActivityName() const;
    void resetButtons();

    void createChart();

    //GETTER and SETTER
    ControllerMain* getController() const;
private:
    Ui_MainWindow* ui;
    ControllerMain* controller;
    ModelMain* model;
    std::list<ActivityBluePrint*> subjects;

private slots:
    void showCategoryAdder();
    void onRemoveCategoryButton();
    void onCategoryPressed();
    void onActivityPressed();
    void onRemoveActivityButton();
    void onAddActivity();
    void onAddEntry();
    void onViewEntries();
    void onIncreaseDateButton();
    void onDecreaseDateButton();
};

#endif //EXAM_PROJECT_MAINWINDOW_H
