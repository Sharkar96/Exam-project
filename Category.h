//
// Created by Andrea on 3/23/2020.
//

#ifndef EXAM_PROJECT_CATEGORY_H
#define EXAM_PROJECT_CATEGORY_H

#include "ActivityBluePrint.h"
#include <iostream>
#include <list>
#include <utility>

class Category {
public:
    explicit Category(std::string n) : name{std::move(n)} {};


    bool operator==(const Category& right) const;


    void print();
    void addActivity(std::unique_ptr<ActivityBluePrint>& a);
    void removeActivity(const std::string& name);

    //GETTER AND SETTER
    const std::string& getName() const;
    void setName(const std::string& n);
private:
    std::list<std::unique_ptr<ActivityBluePrint>>::iterator getActivity(const std::string& name);
    std::string name;
    //TODO add symbol
    std::list<std::unique_ptr<ActivityBluePrint>> ActivityTypes;


};


#endif //EXAM_PROJECT_CATEGORY_H
