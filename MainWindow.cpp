//
// Created by Andrea on 3/28/2020.
//

#include "MainWindow.h"

MainWindow::MainWindow(ControllerMain* c, ModelMain* m, QWidget* parent) : controller{c}, model{m}, QMainWindow(parent),
                                                                           ui(new Ui_MainWindow()) {
    ui->setupUi(this);
    QObject::connect(ui->addCategory, &QPushButton::clicked, this, &MainWindow::createAdder);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::createAdder() {

    CategoryAdderView window(this, nullptr);
    this->hide();
    window.exec();

}

void MainWindow::createCategory(std::string name) {
    catList.emplace_back(name);
}

