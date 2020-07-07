//
// Created by Andrea on 3/23/2020.
//

#ifndef EXAM_PROJECT_ACTIVITYBLUEPRINT_H
#define EXAM_PROJECT_ACTIVITYBLUEPRINT_H


#include <iostream>
#include <map>
#include <QDate>
#include "Activity.h"
#include "Subject.h"
#include "EntryObserverInterface.h"
#include "ListObserverInterface.h"


class ActivityBluePrint : public Subject {
public:
    ActivityBluePrint(std::string n, std::string t, std::string d = "");
    virtual ~ActivityBluePrint();

    void addObserver(Observer* ob) override;
    void removeObserver(Observer* ob) override;
    void notify() override;

    void addActivity(std::unique_ptr<Activity> entry);

    int getTimeTracked(const QDate& d);

    ActivityBluePrint* getAddress();

    //GETTER AND SETTER
    const std::string& getName() const;
    const std::string& getTag() const;
    const std::string& getDescription() const;

protected:
    std::string name{"default"};
    std::string tag; // productivity, waste of time, school related etc.
    std::string description;
    std::list<Observer*> observers;
    std::multimap<QDateTime, std::unique_ptr<Activity>> activities;
};


#endif //EXAM_PROJECT_ACTIVITYBLUEPRINT_H
