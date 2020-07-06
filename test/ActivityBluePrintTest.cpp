//
// Created by Andrea Righetti on 01/05/2020.
//

#include "gtest/gtest.h"
#include "../ActivityBluePrint.h"
#include "../Colors.h"
#include <QDateTime>

TEST(ActivityBPTest, constructor) {

    ActivityBluePrint a("newActivity", "newTag", nullptr, "newDescription");

    EXPECT_EQ("newActivity", a.getName());
    EXPECT_EQ("newTag", a.getTag());
    EXPECT_EQ("newDescription", a.getDescription());
    EXPECT_EQ(0, a.getColor().getR());
    EXPECT_EQ(0, a.getColor().getG());
    EXPECT_EQ(0, a.getColor().getB());
}

TEST(ActivityBPTest, getAddressTest) {
    ActivityBluePrint a("newActivity", "newTag", nullptr, "newDescription");

    EXPECT_EQ(&a, a.getAddress());
}