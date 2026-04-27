#include "../oop.h"

void Circle::setRadius(const double radius) {
    this->radius = radius;
}

void Circle::setX(const double crd_1) {
    this->crd_1 = crd_1;
}

void Circle::setY(const double crd_2) {
    this->crd_2 = crd_2;
}

double Circle::getRadius() {
    return this->radius;
}

double Circle::area() {
    return M_PI * this->radius * this->radius;
}

double Circle::perimeter() {
    return 2 * M_PI * this->radius;
}

void Circle::showCoordinate() {
    cout << "Center: (" << this->crd_1 << ", " << this->crd_2 << ")" << endl;
}

double Circle::getX() {
    return this->crd_1;
}

double Circle::getY() {
    return this->crd_2;
}