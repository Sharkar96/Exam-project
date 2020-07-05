//
// Created by Andrea Righetti on 03/07/2020.
//

#ifndef EXAM_PROJECT_CHART_H
#define EXAM_PROJECT_CHART_H

#include <list>
#include "ActivityBluePrint.h"
#include "Subject.h"
#include "ChartObserverInterface.h"
#include <QtCharts>

class Chart : public Subject {
public:
    Chart();

    void addObserver(Observer* ob) override;
    void removeObserver(Observer* ob) override;
    void notify() override;

    void updateObData(Observer* o, const std::string& n, int t);
    QChart* createChart();

    //GETTER and SETTER
    void setDate(const QDate& date);
    const QDate& getDate() const;
    int getTotalTimeTracked() const;
    void setTotalTimeTracked(int totalTimeTracked);

private:
    int totalTimeTracked{0};
    QDate date;
    std::map<Observer*, std::pair<std::string, int>> observers;
};


#endif //EXAM_PROJECT_CHART_H
