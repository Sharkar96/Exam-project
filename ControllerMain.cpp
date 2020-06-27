//
// Created by Andrea Righetti on 18/05/2020.
//

#include "ControllerMain.h"

void ControllerMain::addCategory(const std::string& name, Observer* ob) {
    if(name.find_first_not_of(' ') != std::string::npos) {
        if(model->checkForDoubleCat(name))
            throw std::invalid_argument("Category already present");
        else {
            auto category = std::make_unique<Category>(name);
            category->addObserver(ob);
            model->addCategory(category);
        }
    } else
        throw std::out_of_range("Insert something");
}

void ControllerMain::removeCategory(const std::string& name) {
    model->removeCategory(name);
}

void ControllerMain::addActivity(const std::string& cat, const std::string& name, const std::string& d,
                                 const std::string& tag) {
    if(name.find_first_not_of(' ') != std::string::npos) {
        if(model->checkForDoubleAct(cat, name))
            throw std::invalid_argument("Activity already present");
        else {
            auto activity = std::make_unique<ActivityBluePrint>(name, tag, d);
            model->addActivity(cat, activity);
        }
    } else
        throw std::out_of_range("Insert something");
}

void ControllerMain::removeActivity(const std::string& catName, const std::string& actName) {
    model->removeActivity(catName, actName);
}

void ControllerMain::refreshActivities(const std::string& n) {
    model->notifyCategory(n);
}

void ControllerMain::addEntry(const std::string& cat, const std::string& act, QTime start, QTime finish, QDate date) {
    if(finish > start) {
        QDateTime s(date, start);
        QDateTime f(date, finish);
        auto entry = std::make_unique<Activity>(s, f);
        model->addEntry(cat, act, std::move(entry));
    } else
        throw std::invalid_argument("Start time can't be greater than Finish time");
}

void ControllerMain::saveSession() {
    model->printCategories();
}

std::string ControllerMain::getDescription(const std::string& cat, const std::string& act) {
    return std::move(model->getDescription(cat, act));
}

std::string ControllerMain::getTags(const std::string& cat, const std::string& act) {
    return std::move(model->getTags(cat, act));
}

