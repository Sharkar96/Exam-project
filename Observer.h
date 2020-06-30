//
// Created by Andrea Righetti on 18/05/2020.
//

#ifndef EXAM_PROJECT_OBSERVER_H
#define EXAM_PROJECT_OBSERVER_H

#include "Subject.h"

class Subject;

class Observer {
public:
    virtual void update(Subject* s, const std::string& n) = 0;
    virtual void clear() = 0;


    virtual ~Observer() = default;
};

#endif //EXAM_PROJECT_OBSERVER_H
