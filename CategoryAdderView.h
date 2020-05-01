//
// Created by Andrea on 3/28/2020.
//

#ifndef EXAM_PROJECT_CATEGORYADDERVIEW_H
#define EXAM_PROJECT_CATEGORYADDERVIEW_H


#include <QtWidgets>
#include "Ui_CategoryAdderView.h"
#include "MainWindow.h"


class CategoryAdderView : public QDialog {
Q_OBJECT
public:
    explicit CategoryAdderView(QWidget* a, QWidget* parent = nullptr);
    ~CategoryAdderView();

private slots:
    void onAddCategory();

private:
    Ui_Dialog* ui;
    QWidget* main;

};


#endif //EXAM_PROJECT_CATEGORYADDERVIEW_H
