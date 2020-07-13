//
// Created by Andrea Righetti on 18/05/2020.
//

#ifndef EXAM_PROJECT_SUBJECT_H
#define EXAM_PROJECT_SUBJECT_H


#include "ListObserverInterface.h"
#include "EntryObserverInterface.h"

class Subject {
public:

    virtual void addObserver(ListObserverInterface* ob) = 0;
    virtual void removeObserver(ListObserverInterface* ob) = 0;
    virtual void addObserver(EntryObserverInterface* ob) = 0;
    virtual void removeObserver(EntryObserverInterface* ob) = 0;

    virtual void notify() = 0;

    virtual ~Subject() = default;
};

#endif //EXAM_PROJECT_SUBJECT_H
