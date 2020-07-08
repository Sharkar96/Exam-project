//
// Created by Andrea Righetti on 08/07/2020.
//

#include "gtest/gtest.h"
#include "../ModelMain.h"
#include "../ControllerMain.h"

class ControllerSuite : public ::testing::Test {
protected:
    void TearDown() override {
        delete m;
        delete c;
    }

    void SetUp() override {
        m = new ModelMain;
        c = new ControllerMain(m);

    }

    void addCategory() {
        auto cat = std::make_unique<Category>("UNI");
        m->addCategory(cat);
    }

    ModelMain* m{nullptr};
    ControllerMain* c{nullptr};
};

TEST_F(ControllerSuite, addCategoryTest) {
    EXPECT_THROW(c->addCategory("", nullptr), std::out_of_range);
    EXPECT_THROW(c->addCategory("   ", nullptr), std::out_of_range);
    EXPECT_NO_THROW(c->addCategory(" g", nullptr));

    addCategory();

    EXPECT_THROW(c->addCategory("UNI", nullptr), std::invalid_argument);

    EXPECT_NO_THROW(c->addCategory("Hobby", nullptr));
}

TEST_F(ControllerSuite, removeCaregoryTest) {
    addCategory();

    EXPECT_THROW(c->addCategory("UNI", nullptr), std::invalid_argument);
    c->removeCategory("UNI");
    EXPECT_NO_THROW(c->addCategory("UNI", nullptr));
}

TEST_F(ControllerSuite, addActivityTest) {
    addCategory();

    EXPECT_THROW(c->addActivity("UNI", "", "", ""), std::out_of_range);

    auto act = std::make_unique<ActivityBluePrint>("Analysis", "Studying");
    m->addActivity("UNI", act);

    EXPECT_THROW(c->addActivity("UNI", "Analysis", "description Test", "Studying"), std::invalid_argument);

    EXPECT_NO_THROW(c->addActivity("UNI", "Programming", "description Test", "Studying"));

}

TEST_F(ControllerSuite, removeActivityTest) {
    addCategory();

    auto act = std::make_unique<ActivityBluePrint>("Analysis", "Studying");
    m->addActivity("UNI", act);

    EXPECT_THROW(c->addActivity("UNI", "Analysis", "description Test", "Studying"), std::invalid_argument);
    c->removeActivity("UNI", "Analysis");
    EXPECT_NO_THROW(c->addActivity("UNI", "Analysis", "description Test", "Studying"));
}

TEST_F(ControllerSuite, getDescriptionAndTagTest) {
    addCategory();

    auto act = std::make_unique<ActivityBluePrint>("Analysis", "Studying", "Description Test");
    m->addActivity("UNI", act);

    EXPECT_EQ(c->getDescription("UNI", "Analysis"), "Description Test");
    EXPECT_EQ(c->getTags("UNI", "Analysis"), "Studying");

}

TEST_F(ControllerSuite, getAddressTest) {
    addCategory();

    auto act = std::make_unique<ActivityBluePrint>("Analysis", "Studying");
    auto* p = act->getAddress();
    m->addActivity("UNI", act);

    EXPECT_EQ(p, c->getAddress("UNI", "Analysis"));
}