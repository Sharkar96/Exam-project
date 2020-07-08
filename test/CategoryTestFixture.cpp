//
// Created by Andrea Righetti on 26/05/2020.
//

#include "../Category.h"
#include "../ActivityBluePrint.h"
#include "gtest/gtest.h"
#include <memory>


class CategorySuite : public ::testing::Test {
protected:
    virtual void TearDown() {
        delete c;
    }

    virtual void SetUp() {
        c = new Category("UNI");
    }

    void addActivity() {
        auto act = std::make_unique<ActivityBluePrint>("Analysis", "Studying", "description test");
        c->addActivity(act);
    }

    void removeActivity() {
        c->removeActivity("Analysis");
    }

    Category* c;
};

TEST(categoryTest, constructor) {
    Category c("catTest");

    EXPECT_EQ("catTest", c.getName());

}

TEST_F(CategorySuite, getAddressTest) {

    auto act = std::make_unique<ActivityBluePrint>("Analysis", "Studying", "description test");

    ActivityBluePrint* p = act.get();
    c->addActivity(act);

    EXPECT_EQ(c->getAddress("Analysis"), p);

    removeActivity();
}

TEST_F(CategorySuite, modifyNameAndCheckForDTest) {

    addActivity();

    EXPECT_EQ(c->checkForDoubleAct("Analysis"), true);

    c->renameAct("Analysis", "Programming");

    EXPECT_EQ(c->checkForDoubleAct("Analysis"), false);
    EXPECT_EQ(c->checkForDoubleAct("Programming"), true);

    c->renameAct("Programming", "Analysis");
}

TEST_F(CategorySuite, addEntryTest) {
    addActivity();

    QDateTime start;
    QDateTime finish;

    start.setDate(QDate::currentDate());
    start.setTime(QTime(10, 45));
    finish.setDate(QDate::currentDate());
    finish.setTime(QTime(11, 45));

    auto a = std::make_unique<Activity>(start, finish);

    c->addEntry("Analysis", std::move(a));
    EXPECT_EQ(c->getAddress("Analysis")->getTimeTracked(start.date()), 3600);

    removeActivity();
}
