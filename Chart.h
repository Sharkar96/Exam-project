//
// Created by Andrea Righetti on 03/07/2020.
//

#ifndef EXAM_PROJECT_CHART_H
#define EXAM_PROJECT_CHART_H

#include <list>
#include "Subject.h"
#include "ActivityBluePrint.h"
#include "ChartObserverInterface.h"

class Chart : public Subject {
public:

    void addObserver(Observer* ob) override;
    void removeObserver(Observer* ob) override;
    void notify() override;


    //GETTER and SETTER
    void setDate(const QDate& date);
    const QDate& getDate() const;

private:
    int totalTimeTracked;
    QDate date;
    std::list<Observer*> observers;
};


#endif //EXAM_PROJECT_CHART_H
