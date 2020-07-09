//
// Created by Andrea Righetti on 18/05/2020.
//

#include "ModelMain.h"

void ModelMain::addObserver(Observer* ob) {
    observers.emplace_back(ob);
}

void ModelMain::removeObserver(Observer* ob) {
    observers.remove(ob);
}

void ModelMain::notify() {
    for(auto i: observers){
        auto p = dynamic_cast<ListObserverInterface*>(i);
        if(p) {
            p->clear();
            for(auto& j:categories)
                p->update(this, j->getName());
        }
    }
}

void ModelMain::addCategory(std::unique_ptr<Category>& c) {
    categories.push_back(std::move(c));
    notify();
}

void ModelMain::removeCategory(const std::string& name) {
    categories.erase(getCategory(name));
    notify();
}

std::list<std::unique_ptr<Category>>::iterator ModelMain::getCategory(const std::string& name) {
    //suppose it exists
    for(auto i = categories.begin(); i != categories.end(); i++)
        if((*i)->getName() == name)
            return i;
    return categories.end();
}

void ModelMain::addActivity(const std::string& catName, std::unique_ptr<ActivityBluePrint>& a) {
    (*getCategory(catName))->addActivity(a);
    notify();

}

void ModelMain::removeActivity(const std::string& catName, const std::string& actName) {
    (*getCategory(catName))->removeActivity(actName);
    notify();
}

bool ModelMain::checkForDoubleCat(const std::string& n) const {
    bool found = false;
    auto it = categories.begin();
    while(found == false && it != categories.end()) {
        if((*it)->getName() == n)
            found = true;
        else
            it++;
    }
    return found;
}

bool ModelMain::checkForDoubleAct(const std::string& cat, const std::string& n) {
    return (*getCategory(cat))->checkForDoubleAct(n);
}

void ModelMain::notifyCategory(const std::string& n) {
    (*getCategory(n))->notify();
}

void ModelMain::addEntry(const std::string& cat, const std::string& act, std::unique_ptr<Activity> entry) {
    (*getCategory(cat))->addEntry(act, std::move(entry));
}

std::string ModelMain::getDescription(const std::string& cat, const std::string& act) {
    return std::move((*getCategory(cat))->getDescription(act));
}

std::string ModelMain::getTags(const std::string& cat, const std::string& act) {
    return std::move((*getCategory(cat))->getTags(act));
}

ActivityBluePrint* ModelMain::getAddress(const std::string& cat, const std::string& act) {
    return (*getCategory(cat))->getAddress(act);
}

void ModelMain::setDate(const QDate& date) {
    ModelMain::date = date;
}

const QDate& ModelMain::getDate() const {
    return date;
}

void ModelMain::renameCat(const std::string& oldName, const std::string& newName) {
    (*getCategory(oldName))->setName(newName);
}

void ModelMain::removeEntry(const std::string& cat, const std::string& act, const QDateTime& start,
                            const QDateTime& finish) {
    (*getCategory(cat))->removeEntry(act, start, finish);
}
