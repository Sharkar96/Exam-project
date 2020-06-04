//
// Created by Andrea on 3/23/2020.
//

#ifndef EXAM_PROJECT_CATEGORY_H
#define EXAM_PROJECT_CATEGORY_H

#include "ActivityBluePrint.h"
#include "Subject.h"
#include <iostream>
#include <list>
#include <utility>

class Category : public Subject {
public:
    explicit Category(std::string n) : name{std::move(n)} {};


    bool operator==(const Category& right) const;

    void addObserver(Observer* ob) override;
    void removeObserver(Observer* ob) override;
    void notify() override;
    ~Category() override = default;


    void print();
    void addActivity(std::unique_ptr<ActivityBluePrint>& a);
    void removeActivity(const std::string& name);
    bool checkForDoubleAct(const std::string& n) const;

    //GETTER AND SETTER
    const std::string& getName() const;
    void setName(const std::string& n);
private:
    std::list<Observer*> observers;
    std::list<std::unique_ptr<ActivityBluePrint>>::iterator getActivity(const std::string& name);
    std::string name;
    //TODO add symbol
    std::list<std::unique_ptr<ActivityBluePrint>> activities;


};


#endif //EXAM_PROJECT_CATEGORY_H
