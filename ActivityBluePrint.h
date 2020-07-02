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

class ActivityBluePrint : public Subject {
public:
    ActivityBluePrint(std::string n, std::string t, std::string d = "", Colors c = Colors()) : name{std::move(n)},
                                                                                               tag{std::move(t)},
                                                                                               description{
                                                                                                       std::move(d)},
                                                                                               color{std::move(c)} {};

    void addObserver(Observer* ob) override;
    void removeObserver(Observer* ob) override;
    void notify() override;

    void addActivity(std::unique_ptr<Activity> entry);

    void printActivities();

    ActivityBluePrint* getAddress();
    //GETTER AND SETTER
    const std::string& getName() const;
    void setName(const std::string& name);
    const Colors& getColor() const;
    void setColor(const Colors& color);
    const std::string& getTag() const;
    void setTag(const std::string& tag);
    const std::string& getDescription() const;
    void setDescription(const std::string& description);
protected:
    std::string name{"default"};
    Colors color;
    std::string tag; // productivity, waste of time, school related etc.
    std::string description;
    std::list<Observer*> observers;
    std::multimap<QDateTime, std::unique_ptr<Activity>> activities;
};


#endif //EXAM_PROJECT_ACTIVITYBLUEPRINT_H
