//
// Created by Andrea on 3/23/2020.
//

#include "ActivityBluePrint.h"

const std::string &ActivityBluePrint::getName() const {
    return name;
}

void ActivityBluePrint::setName(const std::string &name) {
    ActivityBluePrint::name = name;
}

const Colors &ActivityBluePrint::getColor() const {
    return color;
}

void ActivityBluePrint::setColor(const Colors &color) {
    ActivityBluePrint::color = color;
}

const std::string &ActivityBluePrint::getTag() const {
    return tag;
}

void ActivityBluePrint::setTag(const std::string &tag) {
    ActivityBluePrint::tag = tag;
}

const std::string &ActivityBluePrint::getDescription() const {
    return description;
}

void ActivityBluePrint::setDescription(const std::string &description) {
    ActivityBluePrint::description = description;
}

void ActivityBluePrint::addActivity(tm startTime, tm endTime) {
    activities.emplace_back(Activity(startTime, endTime));
}

void ActivityBluePrint::printActivities() {
    for(auto i:activities){
        std::cout << i.startTime.tm_hour << ":" << i.startTime.tm_min << std::endl;
        std::cout << i.endTime.tm_hour << ":" << i.endTime.tm_min << std::endl;
    }

}
