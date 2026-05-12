#include "../oop.h"

Square::Square() : Shape2D("Square") {
    this->side = 0;

    this->x0 = 0;
    this->y0 = 0;

    this->x1 = 0;
    this->y1 = 0;

    this->x2 = 0;
    this->y2 = 0;

    this->x3 = 0;
    this->y3 = 0;
}

Square::Square( double side, double x0, double y0) : Shape2D("Square") {
    this->side = side;

    this->x0 = x0;
    this->y0 = y0;

    this->x1 = this->x0 + this->side;
    this->y1 = this->y0;

    this->x2 = this->x1;
    this->y2 = this->y1 + this->side;

    this->x3 = this->x0;
    this->y3 = this->y0 + this->side;
}


void Square::setSide(double side) {
    this->side = side;
}

void Square::setCoordinates(double x0, double y0) {
    this->x0 = x0;
    this->y0 = y0;

    this->x1 = this->x0 + this->side;
    this->y1 = this->y0;

    this->x2 = this->x1;
    this->y2 = this->y1 + this->side;

    this->x3 = this->x0;
    this->y3 = this->y0 + this->side;
}

double Square::getSide() const {
    return this->side;
}

double Square::area() const {
    return this->side * this->side;
}

double Square::perimeter() const {
    return 4 * this->side;
}

void Square::ShowCoordinates() const {

    cout << "Coordinates:" << endl;

    cout << "Left Bottom (" << this->x0 << ", " << this->y0 << ")" << endl;
    cout << "Right Bottom (" << this->x1 << ", " << this->y1 << ")" << endl;
    cout << "Right Top (" << this->x2 << ", " << this->y2 << ")" << endl;
    cout << "Left Top (" << this->x3 << ", " << this->y3 << ")" << endl;

}