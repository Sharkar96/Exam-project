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
    totalTimeTracked = 0;
    notify();
}

const QDate& Chart::getDate() const {
    return date;
}

Chart::Chart() {
    date = QDate::currentDate();
}

int Chart::getTotalTimeTracked() const {
    return totalTimeTracked;
}

void Chart::setTotalTimeTracked(int totalTimeTracked) {
    Chart::totalTimeTracked = totalTimeTracked;
    std::cout << totalTimeTracked << std::endl;
}

