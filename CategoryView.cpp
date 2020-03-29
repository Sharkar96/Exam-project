//
// Created by Andrea on 3/28/2020.
//

#include "CategoryView.h"

CategoryView::CategoryView(QWidget* a, QWidget* parent) : QDialog{parent}, ui{new Ui_Dialog()} {
    ui->setupUi(this);
    main = a;

}

CategoryView::~CategoryView() {
    main->setVisible(true);
    delete ui;

}

void CategoryView::onAddCategory() {
    ui->LineEditCategory->setText("big ass");
}
