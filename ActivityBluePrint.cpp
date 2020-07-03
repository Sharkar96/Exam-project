//
// Created by Andrea on 3/23/2020.
//

#include "ActivityBluePrint.h"

const std::string& ActivityBluePrint::getName() const {
    return name;
}

const Colors& ActivityBluePrint::getColor() const {
    return color;
}

const std::string& ActivityBluePrint::getTag() const {
    return tag;
}

const std::string& ActivityBluePrint::getDescription() const {
    return description;
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

void ActivityBluePrint::addObserver(Observer* ob) {
    observers.push_back(ob);
}

void ActivityBluePrint::removeObserver(Observer* ob) {
    observers.remove(ob);
}

void ActivityBluePrint::notify() {
    for(const auto& i:observers){
        auto p = dynamic_cast<EntryObserverInterface*>(i);
        if(p)
            for(const auto& j:activities)
                p->update(j.second);
    }
}

ActivityBluePrint* ActivityBluePrint::getAddress() {
    return this;
}

void ActivityBluePrint::update() {

}

