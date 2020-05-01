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
    explicit Category(std::string n) : name{n} {};

    const std::string &getName() const {
        return name;
    }

    void setName(const std::string &name) {
        Category::name = name;
    }

    void print();

private:
    std::string name;
    //TODO add symbol
    std::list<std::unique_ptr<ActivityBluePrint>> ActivityTypes;


};


#endif //EXAM_PROJECT_CATEGORY_H
