//
// Created by Andrea on 3/23/2020.
//

#include "Category.h"


const std::string& Category::getName() const {
    return name;
}

void Category::addActivity(std::unique_ptr<ActivityBluePrint>& a) {
    activities.push_back(std::move(a));
}

void Category::removeActivity(const std::string& name) {
    activities.erase(getActivity(name));
}

std::list<std::unique_ptr<ActivityBluePrint>>::iterator Category::getActivity(const std::string& n) {
    for(auto it = activities.begin(); it != activities.end(); it++){
        if(n == (*it)->getName())
            return it;
    }
    return activities.end();
}

bool Category::checkForDoubleAct(const std::string& n) const {
    bool found = false;
    auto it = activities.begin();
    while(found == false && it != activities.end()) {
        if((*it)->getName() == n)
            found = true;
        else
            it++;
    }
    return found;
}

void Category::addObserver(ListObserverInterface* ob) {
    listObservers.push_back(ob);
}

void Category::removeObserver(ListObserverInterface* ob) {
    listObservers.remove(ob);
}

void Category::notify() {
    for(auto i: listObservers)
        for(auto& j:activities)
            i->update(this, j->getName());
}

void Category::addEntry(const std::string& act, std::unique_ptr<Activity> entry) {
    (*getActivity(act))->addActivity(std::move(entry));
}

std::string Category::getDescription(const std::string& act) {
    return (*getActivity(act))->getDescription();
}

std::string Category::getTags(const std::string& act) {
    return (*getActivity(act))->getTag();
}

ActivityBluePrint* Category::getAddress(const std::string& act) {
    return (*getActivity(act))->getAddress();
}

void Category::renameAct(const std::string& oldName, const std::string& newName) {
    (*getActivity(oldName))->setName(newName);
}

void Category::setName(const std::string& name) {
    Category::name = name;
}

void Category::removeEntry(const std::string& act, const QDateTime& start, const QDateTime& finish) {
    (*getActivity(act))->removeEntry(start, finish);
}

void Category::addObserver(EntryObserverInterface* ob) {
    entryObservers.push_back(ob);
}

void Category::removeObserver(EntryObserverInterface* ob) {
    entryObservers.remove(ob);
}



