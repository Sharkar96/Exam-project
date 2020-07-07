//
// Created by Andrea Righetti on 18/05/2020.
//

#ifndef EXAM_PROJECT_LISTOBSERVERINTERFACE_H
#define EXAM_PROJECT_LISTOBSERVERINTERFACE_H

#include "Subject.h"
#include "Observer.h"

class Subject;

class ListObserverInterface : public Observer {
public:
    virtual void update(Subject* s, const std::string& n) = 0;
    virtual void clear() = 0;

    virtual void update() = 0;
    virtual void addSubject(Subject* s) = 0;
    virtual void removeSubject(Subject* s) = 0;

    virtual ~ListObserverInterface() = default;
};

#endif //EXAM_PROJECT_LISTOBSERVERINTERFACE_H
