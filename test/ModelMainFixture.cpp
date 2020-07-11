//
// Created by Andrea Righetti on 11/07/2020.
//

#include "gtest/gtest.h"
#include "../ModelMain.h"

class ModelMainSuite : public ::testing::Test {
protected:
    void TearDown() override {
        delete m;
    }

    void SetUp() override {
        m = new ModelMain;
        addCategory();
        addActivity();
    }

    void addCategory() {
        auto cat = std::make_unique<Category>("UNI");
        m->addCategory(cat);
    }

    void addActivity() {
        auto act = std::make_unique<ActivityBluePrint>("Analysis", "Studying", "description test");
        m->addActivity("UNI", act);
    }

    ModelMain* m{nullptr};
};

TEST_F(ModelMainSuite, renameAndCheckDoubleTest) {

    EXPECT_EQ(m->checkForDoubleCat("UNI"), true);
    EXPECT_EQ(m->checkForDoubleAct("UNI", "Analysis"), true);

    m->renameCat("UNI", "Hobby");

    EXPECT_EQ(m->checkForDoubleCat("UNI"), false);
    EXPECT_EQ(m->checkForDoubleCat("Hobby"), true);
    EXPECT_EQ(m->checkForDoubleAct("Hobby", "Analysis"), true);

}

TEST_F(ModelMainSuite, removeCatAndAct) {
    m->removeActivity("UNI", "Analysis");

    EXPECT_EQ(m->checkForDoubleAct("UNI", "Analysis"), false);

    m->removeCategory("UNI");

    EXPECT_EQ(m->checkForDoubleCat("UNI"), false);
}
