//
// Created by Andrea on 3/28/2020.
//

#include "CategoryAdderView.h"

CategoryAdderView::CategoryAdderView(ControllerMain* c, QWidget* parent) : controller{c}, QDialog{parent},
                                                                           ui{new Ui_Dialog()} {
    ui->setupUi(this);
    QObject::connect(ui->addCategory, &QPushButton::clicked, this, &CategoryAdderView::onAddCategory);


}

CategoryAdderView::~CategoryAdderView() {
    qobject_cast<QWidget*>(parent())->show();
    delete ui;

}

void CategoryAdderView::onAddCategory() {
    try {
        controller->addCategory(ui->LineEditCategory->text().toStdString());
        this->close();

    } catch(std::out_of_range& e) { //string is null
        // TODO add dialog for the user
    }
}
