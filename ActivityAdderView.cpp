//
// Created by Andrea Righetti on 27/05/2020.
//

#include "ActivityAdderView.h"

ActivityAdderView::ActivityAdderView(ControllerMain* c, QWidget* parent) : controller{c}, QDialog{parent},
                                                                           ui{new Ui_Dialog()} {
    ui->setupUi(this);
    QObject::connect(ui->addActivityButton, &QPushButton::clicked, this, &ActivityAdderView::onAddActivity);


}

ActivityAdderView::~ActivityAdderView() {
    qobject_cast<QWidget*>(parent())->show();
    delete ui;
}

void ActivityAdderView::onAddActivity() {
    try {
        //TODO add color  make a method in this class with a case for each color that return the right color to the controller
        controller->addActivity(ui->nameLineEdit->text().toStdString(),
                                ui->descriptionPlainTextEdit->toPlainText().toStdString(),
                                ui->tagLineEdit->text().toStdString());
        this->close();

    } catch(std::out_of_range& e) { //string is null
        // TODO add dialog for the user
    }
}
