//
// Created by Andrea on 3/23/2020.
//

#ifndef EXAM_PROJECT_CATEGORY_H
#define EXAM_PROJECT_CATEGORY_H

#include "ActivityBluePrint.h"
#include <iostream>
#include <list>

class Category {

private:
    std::string name;
    //TODO add symbol
    std::list<ActivityBluePrint*> ActivityTypes;

};


#endif //EXAM_PROJECT_CATEGORY_H
