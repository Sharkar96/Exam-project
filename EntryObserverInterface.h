//
// Created by Andrea Righetti on 01/07/2020.
//

#ifndef EXAM_PROJECT_ENTRYOBSERVERINTERFACE_H
#define EXAM_PROJECT_ENTRYOBSERVERINTERFACE_H

class Activity;

class EntryObserverInterface {
public:
    virtual ~EntryObserverInterface() = default;
    virtual void update(const std::unique_ptr<Activity>& a) = 0;
};

#endif //EXAM_PROJECT_ENTRYOBSERVERINTERFACE_H
