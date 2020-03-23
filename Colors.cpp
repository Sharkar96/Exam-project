//
// Created by Andrea on 3/23/2020.
//

#include "Colors.h"

bool Colors::outOfRange(const short unsigned int value) {
    return value <= 255;
}

unsigned short Colors::getR() const {
    return r;
}

void Colors::setR(unsigned short r) {
    Colors::r = r;
}

unsigned short Colors::getG() const {
    return g;
}

void Colors::setG(unsigned short g) {
    Colors::g = g;
}

unsigned short Colors::getB() const {
    return b;
}

void Colors::setB(unsigned short b) {
    Colors::b = b;
}
