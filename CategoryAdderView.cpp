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
        controller->addCategory(ui->LineEditCategory->text().toStdString(), dynamic_cast<MainWindow*>(parent()));
    } catch(std::out_of_range& e) { //string is null
        QMessageBox msgBox;
        msgBox.setText(e.what());
        msgBox.exec();

    } catch(std::invalid_argument& e) {//value already present
        QMessageBox msgBox;
        msgBox.setText(e.what());
        msgBox.exec();
    }
    this->close();
}
