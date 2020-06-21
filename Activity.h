//
// Created by Andrea on 3/23/2020.
//

#ifndef EXAM_PROJECT_ACTIVITY_H
#define EXAM_PROJECT_ACTIVITY_H

#include <QDateTime>
#include <utility>

class Activity {
public:
    Activity(QDateTime start, QDateTime end) : startTime{std::move(start)}, endTime{std::move(end)} {};

    void setElapsed();

    //GETTER and SETTER
    const QDateTime& getStartTime() const;
    void setStartTime(const QDateTime& startTime);
    const QDateTime& getEndTime() const;
    void setEndTime(const QDateTime& endTime);
private:
    QDateTime startTime;
    QDateTime endTime;
    // int elapsed;


};


#endif //EXAM_PROJECT_ACTIVITY_H
