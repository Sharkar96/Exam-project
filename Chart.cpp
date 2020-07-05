//
// Created by Andrea Righetti on 03/07/2020.
//

#include "Chart.h"

void Chart::addObserver(Observer* ob) {
    observers[ob] = std::make_pair<std::string, int>("", 0);

}

void Chart::removeObserver(Observer* ob) {
    observers.erase(ob);
}

void Chart::notify() {
    for(const auto& i:observers){
        auto p = dynamic_cast<ChartObserverInterface*>(i.first);
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

void Chart::setTotalTimeTracked(int t) {
    Chart::totalTimeTracked += t;
}

void Chart::updateObData(Observer* o, const std::string& n, int t) {
    auto name = n;
    auto time = t;
    observers[o] = std::make_pair<std::string, int>(std::move(name), std::move(time));
}

QChart* Chart::createChart() {
    if(totalTimeTracked != 0) {
        auto series = new QHorizontalStackedBarSeries();
        for(const auto& i: observers){
            auto barSet = new QBarSet(QString::fromStdString(i.second.first));
            *barSet << ((static_cast<float>(i.second.second) / totalTimeTracked) * 100);
            series->append(barSet);
        }
        auto chart = new QChart();
        chart->addSeries(series);
        chart->setAnimationOptions(QChart::SeriesAnimations);

        auto axisX = new QValueAxis();
        chart->addAxis(axisX, Qt::AlignBottom);
        series->attachAxis(axisX);

        chart->legend()->setVisible(true);
        chart->legend()->setAlignment(Qt::AlignBottom);

        return chart;
    }
    return nullptr;
}



