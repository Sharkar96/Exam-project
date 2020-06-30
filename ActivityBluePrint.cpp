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
    for(const auto& i:activities){
        std::cout << name << " ";
        i.second->print();
        std::cout << std::endl;
    }

}

void ActivityBluePrint::addActivity(std::unique_ptr<Activity> entry) {
    auto key = QDateTime(entry->getStartTime());
    activities.emplace(key, std::move(entry));

}

void ActivityBluePrint::getEntries() {
//TODO new it needs to send the entries to the list
}

