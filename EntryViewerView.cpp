//
// Created by Andrea Righetti on 30/06/2020.
//

#include "EntryViewerView.h"


EntryViewerView::EntryViewerView(ControllerMain* c, std::string cat, std::string act, QWidget* parent) : controller{c},
                                                                                                         category{
                                                                                                                 std::move(
                                                                                                                         cat)},
                                                                                                         activity{
                                                                                                                 std::move(
                                                                                                                         act)},
                                                                                                         QDialog{parent},
                                                                                                         ui{new Ui_Dialog4()} {
    ui->setupUi(this);

    ui->catLabel->setText(QString::fromStdString(category));
    ui->actLabel->setText(QString::fromStdString(activity));
    controller->viewEntries(cat, act);
}

EntryViewerView::~EntryViewerView() {
    delete ui;
}
