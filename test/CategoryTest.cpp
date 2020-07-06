//
// Created by Andrea Righetti on 26/05/2020.
//

#include "../Category.h"
#include "../ActivityBluePrint.h"
#include "gtest/gtest.h"
#include <memory>

TEST(categoryTest, constructor) {
    Category c("catTest");

    EXPECT_EQ("catTest", c.getName());

}

TEST(categoryTest, activityMethods) {
    auto act = std::make_unique<ActivityBluePrint>("test", "TAG test", nullptr, "description test");

    Category c("catTest");
    c.addActivity(act);

    EXPECT_EQ(c.checkForDoubleAct("test"), true);
    EXPECT_EQ(c.getAddress("test"), &act);

    c.removeActivity("test");


}
