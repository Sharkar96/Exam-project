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
    for(auto i: observers)
        i->update();
}
