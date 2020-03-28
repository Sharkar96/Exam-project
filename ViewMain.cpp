//
// Created by Andrea on 3/28/2020.
//

#include "ViewMain.h"

ViewMain::ViewMain(QWidget* parent) : QMainWindow(parent), ui(new Ui_MainWindow()) {
    ui->setupUi(this);
}

ViewMain::~ViewMain() {
    delete ui;
}

void ViewMain::createAdder() {
    std::cout << "CULO";
}
