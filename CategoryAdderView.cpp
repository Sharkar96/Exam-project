//
// Created by Andrea on 3/28/2020.
//

#include "CategoryAdderView.h"

CategoryAdderView::CategoryAdderView(QWidget* a, QWidget* parent) : main{a}, QDialog{parent}, ui{new Ui_Dialog()} {
    ui->setupUi(this);
}

CategoryAdderView::~CategoryAdderView() {
    main->show();
    delete ui;

}

void CategoryAdderView::onAddCategory() {

}
