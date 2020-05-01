//
// Created by Andrea on 3/28/2020.
//

#include "MainWindow.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui_MainWindow()) {
    ui->setupUi(this);
    QObject::connect(ui->addCategory, SIGNAL(clicked()), this, SLOT(createAdder()));
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::createAdder() {

    CategoryAdderView window(this, nullptr);
    this->setVisible(false);
    window.exec();

}

void MainWindow::createCategory(std::string name) {
    catList.emplace_back(name);
}

