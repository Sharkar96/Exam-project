//
// Created by Andrea Righetti on 18/05/2020.
//

#ifndef EXAM_PROJECT_OBSERVER_H
#define EXAM_PROJECT_OBSERVER_H

class Observer {
public:
    virtual void update() = 0;

    virtual ~Observer() = default;
};

#endif //EXAM_PROJECT_OBSERVER_H
