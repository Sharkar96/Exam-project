//
// Created by Andrea on 3/23/2020.
//

#include "ActivityBluePrint.h"

const std::string& ActivityBluePrint::getName() const {
    return name;
}

void ActivityBluePrint::setName(const std::string& name) {
    ActivityBluePrint::name = name;
}

const Colors& ActivityBluePrint::getColor() const {
    return color;
}

void ActivityBluePrint::setColor(const Colors& color) {
    ActivityBluePrint::color = color;
}

const std::string& ActivityBluePrint::getTag() const {
    return tag;
}

void ActivityBluePrint::setTag(const std::string& tag) {
    ActivityBluePrint::tag = tag;
}

const std::string& ActivityBluePrint::getDescription() const {
    return description;
}

void ActivityBluePrint::setDescription(const std::string& description) {
    ActivityBluePrint::description = description;
}


void ActivityBluePrint::printActivities() {
    for(const auto& i:activities)
        std::cout << i.second->getStartTime().toString(QT_FEATURE_textdate) << std::endl;
//TODO print activities start time
}

bool ActivityBluePrint::operator==(const ActivityBluePrint& right) const {
    return this->name == right.getName();
}

void ActivityBluePrint::addActivity(std::unique_ptr<Activity> entry) {
    auto key = QDateTime(entry->getStartTime());
    activities.emplace(key, std::move(entry));
}

