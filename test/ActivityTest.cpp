//
// Created by Andrea Righetti on 03/07/2020.
//

#include "gtest/gtest.h"
#include "../Activity.h"
#include <QDateTime>

TEST(ActivityTest, elapsed) {
    QDateTime start;
    QDateTime finish;

    start.setDate(QDate::currentDate());
    start.setTime(QTime(10, 45));
    finish.setDate(QDate::currentDate());
    finish.setTime(QTime(11, 45));

    Activity a(start, finish);

    EXPECT_EQ(a.getElapsed(), 3600);

}