//
// Created by Andrea Righetti on 18/05/2020.
//

#ifndef EXAM_PROJECT_SUBJECT_H
#define EXAM_PROJECT_SUBJECT_H

#include "Observer.h"

class Subject {
public:

    virtual void addObserver(Observer* ob) = 0;
    virtual void removeObserver(Observer* ob) = 0;
    virtual void notify() = 0;

    virtual ~Subject() = default;
};

#endif //EXAM_PROJECT_SUBJECT_H
