//
// Created by Andrea Righetti on 08/07/2020.
//


#include "gtest/gtest.h"
#include "../ActivityBluePrint.h"
#include "../Activity.h"
#include <memory>

class ActivityBPSuite : public ::testing::Test {
protected:

    virtual void SetUp() {
        a = new ActivityBluePrint("newActivity", "newTag", "newDescription");

        a->setName("Analysis");
        a->setTag("Studying");
        a->setDescription("Description test");

    }

    void addActivity() {
        QTime start(10, 10);
        QTime finish(11, 15);
        QDate date(2019, 6, 10);

        a->addActivity(std::make_unique<Activity>(QDateTime(date, start), QDateTime(date, finish)));

    }

    void removeActivity() {
        QTime start(10, 10);
        QTime finish(11, 15);
        QDate date(2019, 6, 10);

        a->removeEntry(QDateTime(date, start), QDateTime(date, finish));

    }

    virtual void TearDown() {
        delete a;
    }

    ActivityBluePrint* a;
};


TEST_F(ActivityBPSuite, constructor) {

    EXPECT_EQ("Analysis", a->getName());
    EXPECT_EQ("Studying", a->getTag());
    EXPECT_EQ("Description test", a->getDescription());

}

TEST_F(ActivityBPSuite, getAddressTest) {

    EXPECT_EQ(a, a->getAddress());


}

TEST_F(ActivityBPSuite, getTimeTrackedTest) {

    addActivity();
    ASSERT_EQ(a->getTimeTracked(QDate(2019, 6, 10)), 3900);

    ASSERT_EQ(a->getTimeTracked(QDate(2019, 6, 11)), 0);

    removeActivity();
    ASSERT_EQ(a->getTimeTracked(QDate(2019, 6, 10)), 0);

    ASSERT_EQ(a->getTimeTracked(QDate(2019, 6, 11)), 0);
}