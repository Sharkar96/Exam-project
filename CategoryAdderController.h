//
// Created by Andrea on 3/28/2020.
//

#ifndef EXAM_PROJECT_CATEGORYADDERCONTROLLER_H
#define EXAM_PROJECT_CATEGORYADDERCONTROLLER_H


#include <QtWidgets>
#include "CategoryAdder.h"

class CategoryAdderController : public QDialog {
public:
    explicit CategoryAdderController(QWidget* parent = nullptr);
    ~CategoryAdderController();
private:
    Ui_Dialog* ui;
};


#endif //EXAM_PROJECT_CATEGORYADDERCONTROLLER_H
