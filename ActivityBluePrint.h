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

    void addObserver(ListObserverInterface* ob) override;
    void removeObserver(ListObserverInterface* ob) override;
    void addObserver(EntryObserverInterface* ob) override;
    void removeObserver(EntryObserverInterface* ob) override;
    void notify() override;

    void addActivity(std::unique_ptr<Activity> entry);
    void removeEntry(const QDateTime& start, const QDateTime& finish);

    int getTimeTracked(const QDate& d);

    ActivityBluePrint* getAddress();

    //GETTER AND SETTER
    const std::string& getName() const;
    const std::string& getTag() const;
    const std::string& getDescription() const;
    void setName(const std::string& name);
    void setTag(const std::string& tag);
    void setDescription(const std::string& description);

protected:
    std::string name{"default"};
    std::string tag; // productivity, waste of time, school related etc.
    std::string description;
    std::list<EntryObserverInterface*> entryObservers;
    std::list<ListObserverInterface*> listObservers;
    std::multimap<QDateTime, std::unique_ptr<Activity>> activities;
};


#endif //EXAM_PROJECT_ACTIVITYBLUEPRINT_H
