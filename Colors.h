//
// Created by Andrea on 3/23/2020.
//

#ifndef EXAM_PROJECT_COLORS_H
#define EXAM_PROJECT_COLORS_H

class Colors {

public:
    explicit Colors(unsigned char r = 0, unsigned char g = 0, unsigned char b = 0) : R{r}, G{g}, B{b} {};

    unsigned short getR() const;
    void setR(unsigned short r);
    unsigned short getG() const;
    void setG(unsigned short g);
    unsigned short getB() const;
    void setB(unsigned short b);

private:
    unsigned char R;
    unsigned char G;
    unsigned char B;
};

#endif //EXAM_PROJECT_COLORS_H
