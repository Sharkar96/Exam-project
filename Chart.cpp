//
// Created by Andrea Righetti on 03/07/2020.
//

#include "Chart.h"

void Chart::addObserver(Observer* ob) {
    observers.push_back(ob);
}

void Chart::removeObserver(Observer* ob) {
    observers.remove(ob);
}

void Chart::notify() {
    for(const auto& i:observers){
        auto p = dynamic_cast<ChartObserverInterface*>(i);
        if(p)
            p->update();
    }
}

void Chart::setDate(const QDate& date) {
    Chart::date = date;
    notify();
}

const QDate& Chart::getDate() const {
    return date;
}
