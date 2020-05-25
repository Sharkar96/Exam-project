//
// Created by Andrea Righetti on 18/05/2020.
//

#include "ControllerMain.h"

void ControllerMain::addCategory(const std::string& name) {
    if(name.find_first_not_of(' ') != std::string::npos) {
        //TODO create the category and add it to the widget list
        auto category = std::make_unique<Category>(name);
        std::cout << category->getName();
        model->addCategory(category);
    } else
        throw std::out_of_range("Insert something");
}
