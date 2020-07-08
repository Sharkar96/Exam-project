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

void ActivityBluePrint::addObserver(Observer* ob) {
    observers.push_back(ob);

    auto p = dynamic_cast<ListObserverInterface*>(ob);
    if(p) {
        p->addSubject(this);
        p->update();
    }
}

void ActivityBluePrint::removeObserver(Observer* ob) {
    auto p = dynamic_cast<ListObserverInterface*>(ob);
    if(p)
        p->removeSubject(this);
    observers.remove(ob);
}

void ActivityBluePrint::notify() {
    for(const auto& i:observers){
        auto p = dynamic_cast<EntryObserverInterface*>(i);
        if(p)
            for(const auto& j:activities)
                p->update(j.second);
        auto q = dynamic_cast<ListObserverInterface*>(i);
        if(q)
            q->update();
    }
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
    for(const auto& i:observers){
        auto p = dynamic_cast<ListObserverInterface*>(i);
        if(p)
            p->removeSubject(this);
    }

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

void ActivityBluePrint::removeActivity(QDateTime start, QDateTime finish) {
    for(auto i = activities.begin(); i != activities.end();){
        if(i->second->getStartTime() == start && i->second->getEndTime() == finish)
            i = activities.erase(i);
        else
            i++;
    }

}

