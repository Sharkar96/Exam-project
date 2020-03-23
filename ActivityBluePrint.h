//
// Created by Andrea on 3/23/2020.
//

#ifndef EXAM_PROJECT_ACTIVITYBLUEPRINT_H
#define EXAM_PROJECT_ACTIVITYBLUEPRINT_H

#include <iostream>
#include <ctime>
#include "Colors.h"

class ActivityBluePrint {

private:
    std::string name;
    Colors color;
    std::string tag;
    std::string description;
    tm startTime;
    tm endTime;

};


#endif //EXAM_PROJECT_ACTIVITYBLUEPRINT_H
