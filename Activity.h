//
// Created by Andrea on 3/23/2020.
//

#ifndef EXAM_PROJECT_ACTIVITY_H
#define EXAM_PROJECT_ACTIVITY_H
struct Activity {
    tm startTime;
    tm endTime;

    Activity(tm start, tm end) : startTime{start}, endTime{end} {};
};
#endif //EXAM_PROJECT_ACTIVITY_H
