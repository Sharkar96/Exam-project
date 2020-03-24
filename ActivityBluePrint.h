//
// Created by Andrea on 3/23/2020.
//

#ifndef EXAM_PROJECT_ACTIVITYBLUEPRINT_H
#define EXAM_PROJECT_ACTIVITYBLUEPRINT_H

#include <vector>
#include <iostream>
#include <ctime>
#include "Colors.h"
#include "Activity.h"

class ActivityBluePrint {
public:
    ActivityBluePrint(std::string n, Colors c, std::string t, std::string d) : name{n}, color{c}, tag{t},
                                                                               description{d} {};

    const std::string &getName() const;
    void setName(const std::string &name);
    const Colors &getColor() const;
    void setColor(const Colors &color);
    const std::string &getTag() const;
    void setTag(const std::string &tag);
    const std::string &getDescription() const;
    void setDescription(const std::string &description);

    void addEntry(tm startTime, tm endTime);

    void printVector();


protected:
    std::string name{"default"};
    Colors color;
    std::string tag; // productivity, waste of time, school related etc.
    std::string description;
    std::vector<Activity> activities;

};


#endif //EXAM_PROJECT_ACTIVITYBLUEPRINT_H
