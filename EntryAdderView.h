//
// Created by Andrea Righetti on 08/06/2020.
//

#ifndef EXAM_PROJECT_ENTRYADDERVIEW_H
#define EXAM_PROJECT_ENTRYADDERVIEW_H


#include <QtWidgets>
#include "ControllerMain.h"
#include "Ui_EntryAdderView.h"


class EntryAdderView : public QDialog {
Q_OBJECT
public:
    EntryAdderView(ControllerMain* c, std::string cat, std::string act, QWidget* parent = nullptr);
    ~EntryAdderView() override;

private slots:
    void onAddEntry();

//TODO show this in MainWindow
private:
    ControllerMain* controller;
    std::string category, activity;
    Ui_Dialog3* ui;
};


#endif //EXAM_PROJECT_ENTRYADDERVIEW_H
