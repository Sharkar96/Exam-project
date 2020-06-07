//
// Created by Andrea Righetti on 18/05/2020.
//

#ifndef EXAM_PROJECT_OBSERVER_H
#define EXAM_PROJECT_OBSERVER_H

class Observer {
public:
    virtual void updateCategories(const std::string& n) = 0;
    virtual void clearCatList() = 0;

    virtual void updateActivities(const std::string& n) = 0;
    virtual ~Observer() = default;
};

#endif //EXAM_PROJECT_OBSERVER_H
