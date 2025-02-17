#include "defs.h"
#include "RGB.h"
#include <iostream>

using namespace std;

RGB::RGB(int r, int g, int b) : r(r), g(g), b(b) {
    if (!valid(r) || !valid(g) || !valid(b)) warn();
}
RGB::RGB(): r(0), g(0), b(0) {}
RGB::RGB(CuColour color): r(getR(color)), g(getG(color)), b(getB(color)) {
    if (!valid(r) || !valid(g) || !valid(b)) warn();
}

bool RGB::valid(int i) {
    return i >= 0 && i <= 255;
}

RGB RGB::BLACK() {
    return RGB(0, 0, 0);
}

RGB RGB::WHITE() {
    return RGB(255, 255, 255);
}

RGB RGB::RED() {
    return RGB(255, 0, 0);
}

RGB RGB::GREEN() {
    return RGB(0, 255, 0);
}

RGB RGB::BLUE() {
    return RGB(0, 0, 255);
}

void RGB::warn() {
    cout << "The value assigned to RGB is out of bounds. I would throw an error but including the error lib is not allowed" << endl;
}

CuColour RGB::getColour() const {
    return (static_cast<CuColour>(r) << 16)
                 |  (static_cast<CuColour>(g) << 8)
                 |  (static_cast<CuColour>(b));
}

void RGB::setColour(CuColour color) {
    r = getR(color);
    g = getG(color);
    b = getB(color);
}

int RGB::getR(CuColour color) {
    return (color >> 16) & 255;
}

int RGB::getG(CuColour color) {
    return (color >> 8) & 255;
}

int RGB::getB(CuColour color) {
    return color & 255;
}

int RGB::getR() const {
    return r;
}

int RGB::getG() const {
    return g;
}

int RGB::getB() const {
    return b;
}

void RGB::setR(int initR) {
    if (!valid(initR)) warn();
    r = initR;
}

void RGB::setG(int initG) {
    if (!valid(initG)) warn();
    g = initG;
}

void RGB::setB(int initB) {
    if (!valid(initB)) warn();
    b = initB;
}

void RGB::print() const {
    cout << "RGB Object: RGB(" << r << ", " << g << ", " << b << ")" << endl;
}