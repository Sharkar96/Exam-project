//
// Created by Andrea Righetti on 30/06/2020.
//

#ifndef EXAM_PROJECT_ENTRYVIEWERVIEW_H
#define EXAM_PROJECT_ENTRYVIEWERVIEW_H


#include "Ui_EntryViewer.h"
#include "ControllerMain.h"
#include "EntryObserverInterface.h"

class EntryViewerView : public QDialog, public EntryObserverInterface {
Q_OBJECT
public:
    EntryViewerView(ControllerMain* c, std::string cat, std::string act, QWidget* parent = nullptr);
    virtual ~EntryViewerView();

    void update(const std::unique_ptr<Activity>& a) override;

    void tableInit();
    void addEntry(int e, const QDateTime& s, const QDateTime& f);
private slots:

private:
    int rows{0};
    ControllerMain* controller;
    std::string category, activity;
    Ui_Dialog4* ui;
    ActivityBluePrint* subject;
};


#endif //EXAM_PROJECT_ENTRYVIEWERVIEW_H
