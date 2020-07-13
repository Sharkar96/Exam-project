//
// Created by Andrea on 3/23/2020.
//

#include "ActivityBluePrint.h"


ActivityBluePrint::ActivityBluePrint(std::string n, std::string t, std::string d) : name{
        std::move(n)},
                                                                                    tag{std::move(
                                                                                            t)},
                                                                                    description{
                                                                                            std::move(
                                                                                                    d)} {


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
    notify();
}

void ActivityBluePrint::addObserver(ListObserverInterface* ob) {
    listObservers.push_back(ob);

    ob->addSubject(this);
    ob->update();

}

void ActivityBluePrint::removeObserver(ListObserverInterface* ob) {
    ob->removeSubject(this);
    listObservers.remove(ob);
}

void ActivityBluePrint::notify() {
    for(const auto& i:entryObservers)
        for(const auto& j:activities)
            i->update(j.second);

    for(const auto& i:listObservers)
        i->update();

}

ActivityBluePrint* ActivityBluePrint::getAddress() {
    return this;
}

int ActivityBluePrint::getTimeTracked(const QDate& d) {
    int timeTracked = 0;
    for(const auto& i:activities)
        if(i.first.date() == d)
            timeTracked += i.second->getElapsed();
    return timeTracked;
}

ActivityBluePrint::~ActivityBluePrint() {
    for(const auto& i:listObservers)
        i->removeSubject(this);

}

void ActivityBluePrint::setName(const std::string& name) {
    ActivityBluePrint::name = name;
}

void ActivityBluePrint::setTag(const std::string& tag) {
    ActivityBluePrint::tag = tag;
}

void ActivityBluePrint::setDescription(const std::string& description) {
    ActivityBluePrint::description = description;
}

void ActivityBluePrint::removeEntry(const QDateTime& start, const QDateTime& finish) {
    for(auto i = activities.begin(); i != activities.end();){
        if(i->second->getStartTime().toString("hh:mm dd/MM/yy") == start.toString("hh:mm dd/MM/yy") &&
           i->second->getEndTime().toString("hh:mm dd/MM/yy") == finish.toString("hh:mm dd/MM/yy")) {
            i = activities.erase(i);
            notify();
        } else
            i++;
    }

}

void ActivityBluePrint::addObserver(EntryObserverInterface* ob) {
    entryObservers.push_back(ob);
}

void ActivityBluePrint::removeObserver(EntryObserverInterface* ob) {
    entryObservers.remove(ob);
}

