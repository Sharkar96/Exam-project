//
// Created by Andrea on 3/26/2020.
//

#include <QtWidgets/QPushButton>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addcategories.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    QMenu addCategories;


}

void MainWindow::on_actionAdd_Category_triggered() {

    AddCategories c(this);
    c.setModal(true);
    this->setVisible(false);
    c.exec();
}

MainWindow::~MainWindow() {
    delete ui;
}


