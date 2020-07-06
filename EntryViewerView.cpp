//
// Created by Andrea Righetti on 30/06/2020.
//

#include "EntryViewerView.h"


EntryViewerView::EntryViewerView(ControllerMain* c, std::string cat, std::string act,
                                 QWidget* parent) : controller{c},
                                                    category{
                                                            std::move(
                                                                    cat)},
                                                    activity{
                                                            std::move(
                                                                    act)},
                                                    QDialog{parent},
                                                    ui{new Ui_Dialog4()},
                                                    subject{controller->getAddress(category, activity)} {

    subject->addObserver(this);
    ui->setupUi(this);

    tableInit();

    ui->catLabel->setText(QString::fromStdString(category));
    ui->actLabel->setText(QString::fromStdString(activity));

    subject->notify();

}

EntryViewerView::~EntryViewerView() {
    subject->removeObserver(this);
    delete ui;
}


void EntryViewerView::addEntry(int e, const QDateTime& s, const QDateTime& f) {
    ui->tableWidget->setRowCount(++rows);

    auto it1 = new QTableWidgetItem(QString::number(e / 3600));
    auto it2 = new QTableWidgetItem(s.toString("hh:mm dd/MM/yy"));
    auto it3 = new QTableWidgetItem(f.toString("hh:mm dd/MM/yy"));

    ui->tableWidget->setItem(rows - 1, 0, it1);
    ui->tableWidget->setItem(rows - 1, 1, it2);
    ui->tableWidget->setItem(rows - 1, 2, it3);

}

void EntryViewerView::update(const std::unique_ptr<Activity>& a) {
    addEntry(a->getElapsed(), a->getStartTime(), a->getEndTime());
}

void EntryViewerView::tableInit() {
    ui->tableWidget->setColumnCount(3);
    QStringList headers(QStringList() << "Elapsed Time" << "Start" << "Finish");
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}
