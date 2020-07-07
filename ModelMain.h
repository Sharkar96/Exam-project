//
// Created by Andrea Righetti on 18/05/2020.
//

#ifndef EXAM_PROJECT_MODELMAIN_H
#define EXAM_PROJECT_MODELMAIN_H


#include <list>
#include <QDate>
#include "Subject.h"
#include "Category.h"
#include "ListObserverInterface.h"

class ModelMain : public Subject {
public:
    virtual ~ModelMain() = default;

    void addObserver(Observer* ob) override;
    void removeObserver(Observer* ob) override;
    void notify() override;

    void addCategory(std::unique_ptr<Category>& c);
    void removeCategory(const std::string& name);
    bool checkForDoubleCat(const std::string& n) const;
    void notifyCategory(const std::string& n);

    void addActivity(const std::string& catName, std::unique_ptr<ActivityBluePrint>& a);
    void removeActivity(const std::string& catName, const std::string& actName);
    bool checkForDoubleAct(const std::string& cat, const std::string& n);
    std::string getDescription(const std::string& cat, const std::string& act);
    std::string getTags(const std::string& cat, const std::string& act);
    ActivityBluePrint* getAddress(const std::string& cat, const std::string& act);

    void addEntry(const std::string& cat, const std::string& act, std::unique_ptr<Activity> entry);
    //GETTER and SETTER
    void setDate(const QDate& date);
    const QDate& getDate() const;
private:
    std::list<std::unique_ptr<Category>>::iterator getCategory(const std::string& name);
    //^ suppose it exists
    std::list<Observer*> observers;
    QDate date{QDate::currentDate()};
    std::list<std::unique_ptr<Category>> categories;
};


#endif //EXAM_PROJECT_MODELMAIN_H
