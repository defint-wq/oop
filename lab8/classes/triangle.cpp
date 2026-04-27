#include "../oop.h"

void Triangle::setSide(const double side) {
    this->side = side;
}

void Triangle::setCoordinates(const double x0, const double y0) {
    this->x0 = x0;
    this->y0 = y0;

    this->x1 = this->x0 - this->side / 2;
    this->y1 = this->y0 - (sqrt(3) / 2) * this->side;

    this->x2 = this->x0 + side / 2;
    this->y2 = this->y0 - (sqrt(3) / 2) * this->side;
}

double Triangle::getSide() {
    return this->side;
}

double Triangle::area() {
    return (sqrt(3)/4) * this->side * this->side;
}

double Triangle::perimeter() {
    return 3 * this->side;
}

void Triangle::showCoordinates() {

    cout << "Coordinates:" << endl;

    cout << "A(" << x0 << ", " << y0 << ")" << endl;
    cout << "B(" << x1 << ", " << y1 << ")" << endl;
    cout << "C(" << x2 << ", " << y2 << ")" << endl;
}