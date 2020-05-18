//
// Created by Andrea Righetti on 18/05/2020.
//

#ifndef EXAM_PROJECT_MODELMAIN_H
#define EXAM_PROJECT_MODELMAIN_H


#include <list>
#include "Subject.h"

class ModelMain : public Subject {
public:
    virtual ~ModelMain() = default;

    void addObserver(Observer* ob) override;
    void removeObserver(Observer* ob) override;
    void notify() override;


private:
    std::list<Observer*> observers;
};


#endif //EXAM_PROJECT_MODELMAIN_H
