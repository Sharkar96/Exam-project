//
// Created by Andrea Righetti on 21/06/2020.
//

#include <iostream>
#include "Activity.h"

void Activity::setElapsed() {
    elapsed = startTime.secsTo(endTime);
}

const QDateTime& Activity::getStartTime() const {
    return startTime;
}

const QDateTime& Activity::getEndTime() const {
    return endTime;
}

int Activity::getElapsed() const {
    return elapsed;
}

