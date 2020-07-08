//
// Created by Andrea Righetti on 18/05/2020.
//

#include "ControllerMain.h"

void ControllerMain::addCategory(const std::string& name, ListObserverInterface* ob) {
    if(name.find_first_not_of(' ') != std::string::npos) {
        if(model->checkForDoubleCat(name))
            throw std::invalid_argument("Category already present");
        else {
            auto category = std::make_unique<Category>(name);
            category->addObserver(ob);
            model->addCategory(category);
        }
    } else
        throw std::out_of_range("Insert something");
}

void ControllerMain::removeCategory(const std::string& name) {
    model->removeCategory(name);
}

void ControllerMain::addActivity(const std::string& cat, const std::string& name, const std::string& d,
                                 const std::string& tag) {
    if(name.find_first_not_of(' ') != std::string::npos) {
        if(model->checkForDoubleAct(cat, name))
            throw std::invalid_argument("Activity already present");
        else {
            auto activity = std::make_unique<ActivityBluePrint>(name, tag, d);
            activity->addObserver(main);
            model->addActivity(cat, activity);
        }
    } else
        throw std::out_of_range("Insert something");
}

void ControllerMain::removeActivity(const std::string& catName, const std::string& actName) {
    model->removeActivity(catName, actName);
}

void ControllerMain::refreshActivities(const std::string& n) {
    model->notifyCategory(n);
}

void ControllerMain::addEntry(const std::string& cat, const std::string& act, QTime start, QTime finish, QDate date) {
    if(finish > start) {
        QDateTime s(date, start);
        QDateTime f(date, finish);
        auto entry = std::make_unique<Activity>(s, f);
        model->addEntry(cat, act, std::move(entry));
    } else
        throw std::invalid_argument("Start time can't be greater than Finish time");
}

std::string ControllerMain::getDescription(const std::string& cat, const std::string& act) {
    return std::move(model->getDescription(cat, act));
}

std::string ControllerMain::getTags(const std::string& cat, const std::string& act) {
    return std::move(model->getTags(cat, act));
}


ActivityBluePrint* ControllerMain::getAddress(const std::string& cat, const std::string& act) {
    return model->getAddress(cat, act);
}

QDate ControllerMain::increaseDate() {
    QDate date = model->getDate();
    date = date.addDays(1);
    model->setDate(date);
    return date;
}

QDate ControllerMain::decreaseDate() {
    QDate date = model->getDate();
    date = date.addDays(-1);
    model->setDate(date);
    return date;
}

QDate ControllerMain::getDate() const {
    return model->getDate();
}

QChart* ControllerMain::createChart(const std::list<ActivityBluePrint*>& subjects) {
    int totalTimeTracked = 0;

    std::vector<std::pair<std::string, int>> times;

    for(const auto& i:subjects){
        std::string name = i->getName();
        int t = i->getTimeTracked(getDate());
        totalTimeTracked += t;
        times.emplace_back(name, t);
    }

    if(totalTimeTracked != 0) {
        auto series = new QHorizontalStackedBarSeries();
        for(const auto& i: times){
            auto f = static_cast<float>(i.second) / 3600;

            std::stringstream stream;
            stream << std::fixed << std::setprecision(2) << f;
            std::string s = stream.str();

            auto barSet = new QBarSet(QString::fromStdString(
                    i.first + " " + "(" + s + ")"));
            *barSet << (((static_cast<float>(i.second)) / totalTimeTracked) * 100);
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

void ControllerMain::setMain(Observer* main) {
    ControllerMain::main = main;
}

