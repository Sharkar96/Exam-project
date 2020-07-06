//
// Created by Andrea on 3/23/2020.
//

#ifndef EXAM_PROJECT_ACTIVITY_H
#define EXAM_PROJECT_ACTIVITY_H

#include <QDateTime>
#include <utility>

class Activity {
public:
    Activity(QDateTime start, QDateTime end) : startTime{std::move(start)}, endTime{std::move(end)} {
        setElapsed();
    };

    void setElapsed();

    //GETTER and SETTER
    const QDateTime& getStartTime() const;
    const QDateTime& getEndTime() const;
    int getElapsed() const;
private:
    QDateTime startTime;
    QDateTime endTime;
    int elapsed{0};

};


#endif //EXAM_PROJECT_ACTIVITY_H
