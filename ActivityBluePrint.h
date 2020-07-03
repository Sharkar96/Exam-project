//
// Created by Andrea on 3/23/2020.
//

#ifndef EXAM_PROJECT_ACTIVITYBLUEPRINT_H
#define EXAM_PROJECT_ACTIVITYBLUEPRINT_H


#include <iostream>
#include <ctime>
#include <map>
#include <QDate>
#include "Colors.h"
#include "Activity.h"
#include "Subject.h"
#include "EntryObserverInterface.h"
#include "ChartObserverInterface.h"
#include "Chart.h"

class ActivityBluePrint : public Subject, public ChartObserverInterface {
public:
    ActivityBluePrint(std::string n, std::string t, std::string d = "", Colors c = Colors()) : name{std::move(n)},
                                                                                               tag{std::move(t)},
                                                                                               description{
                                                                                                       std::move(d)},
                                                                                               color{std::move(c)} {};

    void addObserver(Observer* ob) override;
    void removeObserver(Observer* ob) override;
    void notify() override;

    void update() override;

    void addActivity(std::unique_ptr<Activity> entry);
    void printActivities();

    ActivityBluePrint* getAddress();
    //GETTER AND SETTER
    const std::string& getName() const;
    const Colors& getColor() const;
    const std::string& getTag() const;
    const std::string& getDescription() const;


protected:
    std::string name{"default"};
    Colors color;
    std::string tag; // productivity, waste of time, school related etc.
    std::string description;
    std::list<Observer*> observers;
    Chart* subject;
    std::multimap<QDateTime, std::unique_ptr<Activity>> activities;
};


#endif //EXAM_PROJECT_ACTIVITYBLUEPRINT_H
