//
// Created by Andrea Righetti on 30/06/2020.
//

#ifndef EXAM_PROJECT_ENTRYVIEWERVIEW_H
#define EXAM_PROJECT_ENTRYVIEWERVIEW_H


#include "Ui_EntryViewer.h"
#include "ControllerMain.h"

class EntryViewerView : public QDialog {
Q_OBJECT
public:
    EntryViewerView(ControllerMain* c, std::string cat, std::string act, QWidget* parent = nullptr);
    virtual ~EntryViewerView();

private slots:

private:
    ControllerMain* controller;
    std::string category, activity;
    Ui_Dialog4* ui;
};


#endif //EXAM_PROJECT_ENTRYVIEWERVIEW_H
