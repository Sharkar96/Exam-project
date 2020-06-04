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
    QObject::connect(ui->addActivityButton, &QPushButton::clicked, this, &MainWindow::onAddActivity);
    QObject::connect(ui->removeActivityButton, &QPushButton::clicked, this, &MainWindow::onRemoveActivityButton);


    ui->removeCategoryButton->setDisabled(true);
    ui->addActivityButton->setDisabled(true);
    ui->removeActivityButton->setDisabled(true);
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
void MainWindow::updateCategories(const std::string& n) {
    ui->categoryListWidget->addItem(QString::fromStdString(n));
}


void MainWindow::clearCatList() {
    ui->categoryListWidget->clear();
}

void MainWindow::onRemoveCategoryButton() {
    controller->removeCategory(getCategoryName());
}

void MainWindow::onCategoryPressed() {
    ui->removeCategoryButton->setDisabled(ui->categoryListWidget->selectedItems().isEmpty());
    ui->addActivityButton->setDisabled(ui->categoryListWidget->selectedItems().isEmpty());
    ui->removeActivityButton->setDisabled(ui->categoryListWidget->selectedItems().isEmpty());
    controller->refreshActivities(getCategoryName());
}

void MainWindow::onAddActivity() {
    ActivityAdderView window(controller, getCategoryName(), this);
    this->hide();
    window.exec();
}

std::string MainWindow::getCategoryName() const {
    return std::move(ui->categoryListWidget->currentItem()->text().toStdString());
}

void MainWindow::onRemoveActivityButton() {

}

void MainWindow::clearActList() {
    ui->activityListWidget->clear();
}

void MainWindow::updateActivities(const std::string& n) {
    ui->activityListWidget->addItem(QString::fromStdString(n));
}




