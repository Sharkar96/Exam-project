//
// Created by Andrea Righetti on 18/05/2020.
//

#include "ControllerMain.h"

void ControllerMain::addCategory(const std::string& name) {
    if(name.find_first_not_of(' ') != std::string::npos)
        1 + 2;
    else
        throw std::out_of_range("Insert something");
}
