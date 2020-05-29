//
// Created by Andrea on 3/23/2020.
//

#include "Category.h"

const std::string& Category::getName() const {
    return name;
}

void Category::setName(const std::string& n) {
    name = n;
}

void Category::print() {
    std::cout << name
              << std::endl;

}

void Category::addActivity(std::unique_ptr<ActivityBluePrint>& a) {
    ActivityTypes.push_back(std::move(a));
}

void Category::removeActivity(const std::string& name) {
    ActivityTypes.erase(getActivity(name));
}

std::list<std::unique_ptr<ActivityBluePrint>>::iterator Category::getActivity(const std::string& n) {
    for(auto it = ActivityTypes.begin(); it != ActivityTypes.end(); it++){
        if(n == (*it)->getName())
            return it;
    }
    return ActivityTypes.end();
}

bool Category::operator==(const Category& right) const {
    return this->name == right.getName();
}
