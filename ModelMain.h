//
// Created by Andrea Righetti on 18/05/2020.
//

#ifndef EXAM_PROJECT_MODELMAIN_H
#define EXAM_PROJECT_MODELMAIN_H


#include <list>
#include "Subject.h"
#include "Category.h"

class ModelMain : public Subject {
public:
    virtual ~ModelMain() = default;

    void addObserver(Observer* ob) override;
    void removeObserver(Observer* ob) override;
    void notify() override;

    void addCategory(std::unique_ptr<Category>& c);
    void removeCategory(const std::string& name);

    //TODO add remove and add activity like in controller finish
    void addActivity(const std::string& catName, std::unique_ptr<ActivityBluePrint>& a);
    void removeActivity(const std::string& catName, const std::string& actName);
private:
    std::list<std::unique_ptr<Category>>::iterator getCategory(const std::string& name);
    //^ suppose it exists
    std::list<Observer*> observers;
    std::list<std::unique_ptr<Category>> categories;
};


#endif //EXAM_PROJECT_MODELMAIN_H
