//
// Created by Andrea on 3/23/2020.
//

#include "ActivityBluePrint.h"

ActivityBluePrint::ActivityBluePrint(std::string n, std::string t, Chart* s, std::string d) : name{
        std::move(n)},
                                                                                              tag{std::move(
                                                                                                      t)},
                                                                                              subject{s},
                                                                                              description{
                                                                                                      std::move(
                                                                                                              d)} {

    subject->addObserver(this);
}

const std::string& ActivityBluePrint::getName() const {
    return name;
}

const std::string& ActivityBluePrint::getTag() const {
    return tag;
}

const std::string& ActivityBluePrint::getDescription() const {
    return description;
}

void ActivityBluePrint::addActivity(std::unique_ptr<Activity> entry) {
    auto key = QDateTime(entry->getStartTime());
    activities.emplace(key, std::move(entry));
    update();

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
    int time = getTimeTracked(subject->getDate());
    subject->updateObData(this, name, time);
    subject->setTotalTimeTracked(time);
}

int ActivityBluePrint::getTimeTracked(const QDate& d) {
    int timeTracked = 0;
    for(const auto& i:activities)
        if(i.first.date() == d)
            timeTracked += i.second->getElapsed();
    return timeTracked;
}

ActivityBluePrint::~ActivityBluePrint() {
    subject->setTotalTimeTracked(-getTimeTracked(subject->getDate()));
    subject->removeObserver(this);
}

