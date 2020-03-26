//
// Created by Andrea on 3/26/2020.
//

#ifndef EXAM_PROJECT_MAINWINDOW_H
#define EXAM_PROJECT_MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow {
Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow* ui;


private slots:
    void on_actionAdd_Category_triggered();

};

#endif //EXAM_PROJECT_MAINWINDOW_H
