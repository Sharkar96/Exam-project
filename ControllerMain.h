//
// Created by Andrea Righetti on 18/05/2020.
//

#ifndef EXAM_PROJECT_CONTROLLERMAIN_H
#define EXAM_PROJECT_CONTROLLERMAIN_H


#include "ModelMain.h"
#include "Activity.h"
#include <string>
#include <QTime>

class ControllerMain {
public:
    explicit ControllerMain(ModelMain* m) : model{m} {};

    void addCategory(const std::string& name, ListObserverInterface* ob);
    void removeCategory(const std::string& name);

    void addActivity(const std::string& cat, const std::string& name, Chart* subject, const std::string& d,
                     const std::string& tag);
    void removeActivity(const std::string& catName, const std::string& actName);
    void refreshActivities(const std::string& n);
    std::string getDescription(const std::string& cat, const std::string& act);
    std::string getTags(const std::string& cat, const std::string& act);
    ActivityBluePrint* getAddress(const std::string& cat, const std::string& act);

    void addEntry(const std::string& cat, const std::string& act, QTime start, QTime finish, QDate date);

    void saveSession();
private:
    ModelMain* model;
};


#endif //EXAM_PROJECT_CONTROLLERMAIN_H
