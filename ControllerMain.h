//
// Created by Andrea Righetti on 18/05/2020.
//

#ifndef EXAM_PROJECT_CONTROLLERMAIN_H
#define EXAM_PROJECT_CONTROLLERMAIN_H


#include "ModelMain.h"
#include <string>

class ControllerMain {
public:
    explicit ControllerMain(ModelMain* m) : model{m} {};

    void addCategory(const std::string& name);
    void removeCategory(const std::string& name);

    //TODO complete add and remove activity
    void addActivity(const std::string& name, const std::string& d, const std::string& tag);
private:
    ModelMain* model;
};


#endif //EXAM_PROJECT_CONTROLLERMAIN_H
