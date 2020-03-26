#include "addcategories.h"
#include "ui_addcategories.h"

AddCategories::AddCategories(QWidget* parent) : QDialog(parent), ui(new Ui::AddCategories) {
    ui->setupUi(this);
}

AddCategories::~AddCategories() {
    delete ui;
    mainWindow->setVisible(true);


}

AddCategories::AddCategories(QMainWindow* main, QWidget* parent) : AddCategories(parent) {
    mainWindow = main;
}
