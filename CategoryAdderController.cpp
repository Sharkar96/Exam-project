//
// Created by Andrea on 3/28/2020.
//

#include "CategoryAdderController.h"

CategoryAdderController::CategoryAdderController(QWidget* parent) : QDialog(parent), ui(new Ui_Dialog()) {
    ui->setupUi(this);
}

CategoryAdderController::~CategoryAdderController() {
    delete ui;
}
