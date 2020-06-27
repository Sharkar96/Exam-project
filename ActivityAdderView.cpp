//
// Created by Andrea Righetti on 27/05/2020.
//

#include "ActivityAdderView.h"

ActivityAdderView::ActivityAdderView(ControllerMain* c, std::string cat, QWidget* parent) : controller{c},
                                                                                            categoryName{
                                                                                                    std::move(cat)},
                                                                                            QDialog{parent},
                                                                                            ui{new Ui_Dialog2()} {
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
        controller->addActivity(categoryName, ui->nameLineEdit->text().toStdString(),
                                ui->descriptionPlainTextEdit->toPlainText().toStdString(),
                                ui->tagLineEdit->text().toStdString());

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
