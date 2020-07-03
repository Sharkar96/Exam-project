//
// Created by Andrea Righetti on 03/07/2020.
//

#ifndef EXAM_PROJECT_CHARTOBSERVERINTERFACE_H
#define EXAM_PROJECT_CHARTOBSERVERINTERFACE_H

#include "Observer.h"

class ChartObserverInterface : public Observer {
public:
    virtual void update() = 0;
};

#endif //EXAM_PROJECT_CHARTOBSERVERINTERFACE_H
