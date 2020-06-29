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
    QObject::connect(ui->categoryListWidget, &QListWidget::clicked, this, &MainWindow::onCategoryPressed);
    QObject::connect(ui->activityListWidget, &QListWidget::clicked, this, &MainWindow::onActivityPressed);
    QObject::connect(ui->addActivityButton, &QPushButton::clicked, this, &MainWindow::onAddActivity);
    QObject::connect(ui->removeActivityButton, &QPushButton::clicked, this, &MainWindow::onRemoveActivityButton);
    QObject::connect(ui->addEntryButton, &QPushButton::clicked, this, &MainWindow::onAddEntry);

    resetButtons();
}

MainWindow::~MainWindow() {
    saveSession();
    model->removeObserver(this);
    delete ui;
}

void MainWindow::showCategoryAdder() {
    CategoryAdderView window(controller, this);
    this->hide();
    window.exec();
    refreshActList();
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
    refreshActList();
}

void MainWindow::onCategoryPressed() {
    refreshActList();
}

void MainWindow::onAddActivity() {
    ActivityAdderView window(controller, getCategoryName(), this);
    this->hide();
    window.exec();
    refreshActList();

}

std::string MainWindow::getCategoryName() const {
    return std::move(ui->categoryListWidget->currentItem()->text().toStdString());
}

std::string MainWindow::getActivityName() const {
    return std::move(ui->activityListWidget->currentItem()->text().toStdString());
}

void MainWindow::onRemoveActivityButton() {
    controller->removeActivity(ui->categoryListWidget->currentItem()->text().toStdString(),
                               ui->activityListWidget->currentItem()->text().toStdString());
    refreshActList();
}

void MainWindow::updateActivities(const std::string& n) {
    ui->activityListWidget->addItem(QString::fromStdString(n));
}

void MainWindow::refreshActList() {
    ui->activityListWidget->clear();
    if(ui->categoryListWidget->count() > 0) {
        if(ui->categoryListWidget->currentItem() == nullptr)
            ui->categoryListWidget->setCurrentItem(ui->categoryListWidget->item(0));
        controller->refreshActivities(getCategoryName());
    }
    updateActivityInfo();
    resetButtons();
}

void MainWindow::onActivityPressed() {
    resetButtons();
    updateActivityInfo();
}

void MainWindow::onAddEntry() {//Suppose button is disabled if no activity is selected
    EntryAdderView window(controller, getCategoryName(), getActivityName(), this);
    this->hide();
    window.exec();

}

void MainWindow::resetButtons() {
    ui->addEntryButton->setDisabled(ui->activityListWidget->selectedItems().isEmpty());
    ui->removeCategoryButton->setDisabled(ui->categoryListWidget->selectedItems().isEmpty());
    ui->addActivityButton->setDisabled(ui->categoryListWidget->selectedItems().isEmpty());
    ui->removeActivityButton->setDisabled(ui->activityListWidget->selectedItems().isEmpty());
}

void MainWindow::saveSession() {
    controller->saveSession();
}

void MainWindow::createChart() {
    //QBarSet * set0= new QBarSet("activity 1");
}

void MainWindow::updateActivityInfo() {
    statusBar()->clearMessage();
    ui->description->clear();
    if(ui->activityListWidget->currentItem() != nullptr) {
        ui->description->setText(
                QString::fromStdString(controller->getDescription(getCategoryName(), getActivityName())));
        statusBar()->showMessage(
                "Tags: " + QString::fromStdString(controller->getTags(getCategoryName(), getActivityName())));
    }
}





