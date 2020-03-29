//
// Created by Andrea on 3/28/2020.
//

#ifndef EXAM_PROJECT_CATEGORYVIEW_H
#define EXAM_PROJECT_CATEGORYVIEW_H


#include <QtWidgets>
#include "CategoryAdder.h"


class CategoryView : public QDialog {
Q_OBJECT
public:
    explicit CategoryView(QWidget* a, QWidget* parent = nullptr);

    ~CategoryView();

private slots:
    void onAddCategory();

private:
    Ui_Dialog* ui;
    QWidget* main;

};


#endif //EXAM_PROJECT_CATEGORYVIEW_H
