#include "../oop.h"

void Square::setSide(const double side) {
    this->side = side;
}

void Square::setCoordinates(const double x0, const double y0) {
    this->x0 = x0;
    this->y0 = y0;

    this->x1 = this->x0 + this->side;
    this->y1 = this->y0;

    this->x2 = this->x1;
    this->y2 = this->y1 + this->side;

    this->x3 = this->x0;
    this->y3 = this->y0 + this->side;
}

double Square::getSide() {
    return this->side;
}

double Square::area() {
    return this->side * this->side;
}

double Square::perimeter() {
    return 4 * this->side;
}

void Square::ShowCoordinates() {

    cout << "Coordinates:" << endl;

    cout << "Left Bottom (" << this->x0 << ", " << this->y0 << ")" << endl;
    cout << "Right Bottom (" << this->x1 << ", " << this->y1 << ")" << endl;
    cout << "Right Top (" << this->x2 << ", " << this->y2 << ")" << endl;
    cout << "Left Top (" << this->x3 << ", " << this->y3 << ")" << endl;

}