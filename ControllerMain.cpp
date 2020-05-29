//
// Created by Andrea Righetti on 18/05/2020.
//

#include "ControllerMain.h"

void ControllerMain::addCategory(const std::string& name) {
    if(name.find_first_not_of(' ') != std::string::npos) {
        auto category = std::make_unique<Category>(name);
        model->addCategory(category);
    } else
        throw std::out_of_range("Insert something");

    //TODO here is the throw in case the category is already present: need a function for comparing categories and the operator == (DONE the operator ==) in category. All this same for Activity
}

void ControllerMain::removeCategory(const std::string& name) {
    model->removeCategory(name);
}

void ControllerMain::addActivity(const std::string& cat, const std::string& name, const std::string& d,
                                 const std::string& tag) {
    if(name.find_first_not_of(' ') != std::string::npos) {
        auto activity = std::make_unique<ActivityBluePrint>(name, tag, d);
        model->addActivity(cat, activity);
    } else
        throw std::out_of_range("Insert something");
}

void ControllerMain::removeActivity(const std::string& catName, const std::string& actName) {
    model->removeActivity(catName, actName);
}

