//
// Created by Andrea Righetti on 27/05/2020.
//

#ifndef EXAM_PROJECT_ACTIVITYADDERVIEW_H
#define EXAM_PROJECT_ACTIVITYADDERVIEW_H

#include <QtWidgets>
#include "Ui_ActivityAdderView.h"
#include "MainWindow.h"

class ActivityAdderView : public QDialog {
Q_OBJECT
public:
    explicit ActivityAdderView(std::string cat, QWidget* parent = nullptr);

    ~ActivityAdderView() override;

private slots:
    void onAddActivity();

private:
    std::string categoryName;
    Ui_Dialog2* ui;
};


#endif //EXAM_PROJECT_ACTIVITYADDERVIEW_H
