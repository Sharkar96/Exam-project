//
// Created by Andrea Righetti on 08/06/2020.
//

#include "EntryAdderView.h"

EntryAdderView::EntryAdderView(ControllerMain* c, std::string cat, std::string act, QWidget* parent) : controller{c},
                                                                                                       category{
                                                                                                               std::move(
                                                                                                                       cat)},
                                                                                                       activity{
                                                                                                               std::move(
                                                                                                                       act)},
                                                                                                       QDialog{parent},
                                                                                                       ui{new Ui_Dialog3()} {
    ui->setupUi(this);
    QObject::connect(ui->addEntryButton, &QPushButton::clicked, this, &EntryAdderView::onAddEntry);

    ui->catLabel->setText(QString::fromStdString(category));
    ui->actLabel->setText(QString::fromStdString(activity));
    ui->dateEdit->setDate(QDate::currentDate());
}

EntryAdderView::~EntryAdderView() {
    qobject_cast<QWidget*>(parent())->show();
    delete ui;
}

void EntryAdderView::onAddEntry() {
    try {
        controller->addEntry(category, activity, ui->startTimeEdit->time(), ui->finishTimeEdit->time(),
                             ui->dateEdit->date());
    } catch(std::invalid_argument& e) {//finish time < start time
        QMessageBox msgBox;
        msgBox.setText(e.what());
        msgBox.exec();
    }
    this->close();
}