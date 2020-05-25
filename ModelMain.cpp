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
        i->clear();
        for(auto& j:categories)
            i->update(j->getName());
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
}


