//
// Created by Andrea Righetti on 18/05/2020.
//

#ifndef EXAM_PROJECT_CONTROLLERMAIN_H
#define EXAM_PROJECT_CONTROLLERMAIN_H


#include "ModelMain.h"

class ControllerMain {
public:
    explicit ControllerMain(ModelMain* m) : model{m} {};


private:
    ModelMain* model;
};


#endif //EXAM_PROJECT_CONTROLLERMAIN_H
