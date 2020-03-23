//
// Created by Andrea on 3/23/2020.
//

#ifndef EXAM_PROJECT_COLORS_H
#define EXAM_PROJECT_COLORS_H

class Colors {

public:
    explicit Colors(short unsigned int r, short unsigned int g, short unsigned int b) {
        if(outOfRange(r)) this->r = r;
        if(outOfRange(g)) this->g = g;
        if(outOfRange(b)) this->b = b;
    };

    unsigned short getR() const;
    void setR(unsigned short r);
    unsigned short getG() const;
    void setG(unsigned short g);
    unsigned short getB() const;
    void setB(unsigned short b);

private:
    bool outOfRange(short unsigned int value); //check if colors are 0, 255
    short unsigned int r;
    short unsigned int g;
    short unsigned int b;
};

#endif //EXAM_PROJECT_COLORS_H
