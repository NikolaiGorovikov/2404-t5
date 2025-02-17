#ifndef RGB_H
#define RGB_H

#include "defs.h"

class RGB {
private:
    int r;
    int g;
    int b;
    static bool valid(int i);
    static void warn();

public:
    RGB(int r, int g, int b);
    RGB();
    RGB(CuColour color);
    CuColour getColour() const;
    void setColour(CuColour color);
    static int getR(CuColour color);
    static int getG(CuColour color);
    static int getB(CuColour color);
    int getR() const;
    int getG() const;
    int getB() const;
    void setR(int r);
    void setG(int g);
    void setB(int b);
    void print() const;

    static RGB WHITE();
    static RGB BLACK();
    static RGB RED();
    static RGB GREEN();
    static RGB BLUE();
};

#endif