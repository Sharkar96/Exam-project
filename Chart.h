//
// Created by Andrea Righetti on 03/07/2020.
//

#ifndef EXAM_PROJECT_CHART_H
#define EXAM_PROJECT_CHART_H

#include <list>
#include "ActivityBluePrint.h"
#include "Subject.h"
#include "ChartObserverInterface.h"

class Chart : public Subject {
public:
    Chart();

    void addObserver(Observer* ob) override;
    void removeObserver(Observer* ob) override;
    void notify() override;


    //GETTER and SETTER
    void setDate(const QDate& date);
    const QDate& getDate() const;
    int getTotalTimeTracked() const;
    void setTotalTimeTracked(int totalTimeTracked);

private:
    int totalTimeTracked{0};
    QDate date;
    std::list<Observer*> observers;
};


#endif //EXAM_PROJECT_CHART_H
