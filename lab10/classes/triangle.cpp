#include "../oop.h"

Triangle::Triangle() : Shape2D("Triangle") {
    this->side = 0;

    this->x0 = 0;
    this->y0 = 0;
    this->x1 = 0;
    this->y1 = 0;
    this->x2 = 0;
    this->y2 = 0;
}

Triangle::Triangle(double side, double x0, double y0) : Shape2D("Triangle") {
    this->side = side;
    double height = (sqrt(3) / 2) * side;

    this->x0 = x0;
    this->y0 = y0;

    this->x1 = this->x0 - this->side / 2;
    this->y1 = this->y0 - height;

    this->x2 = this->x0 + this->side / 2;
    this->y2 = this->y0 - height;
}

void Triangle::setSide(double side) {
    this->side = side;
}

void Triangle::setCoordinates(double x0, double y0) {
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

double Triangle::area() const {
    return (sqrt(3)/4) * this->side * this->side;
}

double Triangle::perimeter() const {
    return 3 * this->side;
}

void Triangle::showCoordinates() const {

    cout << "Coordinates:" << endl;

    cout << "A(" << x0 << ", " << y0 << ")" << endl;
    cout << "B(" << x1 << ", " << y1 << ")" << endl;
    cout << "C(" << x2 << ", " << y2 << ")" << endl;
}