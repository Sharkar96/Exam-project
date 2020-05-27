//
// Created by Andrea Righetti on 27/05/2020.
//

#ifndef EXAM_PROJECT_ACTIVITYADDERVIEW_H
#define EXAM_PROJECT_ACTIVITYADDERVIEW_H

#include <QtWidgets>
#include "ControllerMain.h"
#include "Ui_ActivityAdderView.h"

class ActivityAdderView : public QDialog {
Q_OBJECT
public:
    explicit ActivityAdderView(ControllerMain* c, QWidget* parent = nullptr);

    ~ActivityAdderView();

private slots:
    void onAddActivity();
private:
    ControllerMain* controller;
    Ui_Dialog* ui;
};


#endif //EXAM_PROJECT_ACTIVITYADDERVIEW_H
