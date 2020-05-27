//
// Created by Andrea on 3/28/2020.
//

#include "MainWindow.h"

MainWindow::MainWindow(ControllerMain* c, ModelMain* m, QWidget* parent) : controller{c}, model{m}, QMainWindow(parent),
                                                                           ui(new Ui_MainWindow()) {
    model->addObserver(this);
    ui->setupUi(this);
    QObject::connect(ui->addCategoryButton, &QPushButton::clicked, this, &MainWindow::showCategoryAdder);
    QObject::connect(ui->removeCategoryButton, &QPushButton::clicked, this, &MainWindow::onRemoveCategoryButton);
    QObject::connect(ui->categoryListWidget, &QListWidget::itemSelectionChanged, this, &MainWindow::onCategoryPressed);
    ui->removeCategoryButton->setDisabled(true);
}

MainWindow::~MainWindow() {
    model->removeObserver(this);
    delete ui;
}

void MainWindow::showCategoryAdder() {

    CategoryAdderView window(controller, this);
    this->hide();
    window.exec();

}

//XXX the list is cleared and reimplemented from scratch every time an item is added or removed, this could lead to problems
void MainWindow::update(const std::string& n) {
    ui->categoryListWidget->addItem(QString::fromStdString(n));
}


void MainWindow::clear() {
    ui->categoryListWidget->clear();
}

void MainWindow::onRemoveCategoryButton() {
    controller->removeCategory(ui->categoryListWidget->currentItem()->text().toStdString());
}

void MainWindow::onCategoryPressed() {
    ui->removeCategoryButton->setDisabled(ui->categoryListWidget->selectedItems().isEmpty());
}



