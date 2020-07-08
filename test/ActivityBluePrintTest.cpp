//
// Created by Andrea Righetti on 01/05/2020.
//

#include "gtest/gtest.h"
#include "../ActivityBluePrint.h"
#include <QDateTime>

TEST(ActivityBPTest, constructor) {

    ActivityBluePrint a("newActivity", "newTag", "newDescription");

    EXPECT_EQ("newActivity", a.getName());
    EXPECT_EQ("newTag", a.getTag());
    EXPECT_EQ("newDescription", a.getDescription());

}


