//
// Created by Andrea on 3/28/2020.
//

#ifndef EXAM_PROJECT_VIEWMAIN_H
#define EXAM_PROJECT_VIEWMAIN_H


#include <QMainWindow>
#include "MainWindow.h"
#include <iostream>

class ViewMain : public QMainWindow {
Q_OBJECT
public:
    explicit ViewMain(QWidget* parent = nullptr);

    virtual ~ViewMain();
private:
    Ui_MainWindow* ui;
private slots:
    void createAdder();
};

#endif //EXAM_PROJECT_VIEWMAIN_H
