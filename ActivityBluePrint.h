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

    const std::string &getName() const;
    void setName(const std::string &name);
    const Colors &getColor() const;
    void setColor(const Colors &color);
    const std::string &getTag() const;
    void setTag(const std::string &tag);
    const std::string &getDescription() const;
    void setDescription(const std::string &description);
    void addEntry(tm startTime, tm endTime);

protected:
    std::string name;
    Colors color;
    std::string tag;
    std::string description;
    std::vector<Activity> activities;

};


#endif //EXAM_PROJECT_ACTIVITYBLUEPRINT_H
