//
// Created by Andrea on 3/28/2020.
//

#include "CategoryAdderView.h"

CategoryAdderView::CategoryAdderView(ControllerMain* c, QWidget* parent) : controller{c}, QDialog{parent},
                                                                           ui{new Ui_Dialog()} {
    ui->setupUi(this);
}

CategoryAdderView::~CategoryAdderView() {
    qobject_cast<QWidget*>(parent())->hide();
    delete ui;

}

void CategoryAdderView::onAddCategory() {
    try {
        controller->addCategory(ui->LineEditCategory->text().toStdString());

    } catch(std::out_of_range& e) { //string is null
        // TODO add dialog for the user
    }
}
