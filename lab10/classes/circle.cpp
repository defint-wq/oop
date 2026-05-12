#include "../oop.h"

Circle::Circle() : Shape2D("Circle") {
    this->radius = 0;
    this->crd_1 = 0;
    this->crd_2 = 0;
}
Circle::Circle(double radius, double crd_1, double crd_2) : Shape2D("Circle") {
    this->radius = radius;
    this->crd_1 = crd_1;
    this->crd_2 = crd_2;
}

void Circle::setRadius(double radius) {
    this->radius = radius;
}

void Circle::setX(double crd_1) {
    this->crd_1 = crd_1;
}

void Circle::setY(const double crd_2) {
    this->crd_2 = crd_2;
}

double Circle::getRadius() const{
    return this->radius;
}

double Circle::area() const {
    return M_PI * this->radius * this->radius;
}

double Circle::perimeter() const {
    return 2 * M_PI * this->radius;
}

void Circle::showCoordinate() {
    cout << "Center: (" << this->crd_1 << ", " << this->crd_2 << ")" << endl;
}

double Circle::getX() const{
    return this->crd_1;
}

double Circle::getY() const{
    return this->crd_2;
}