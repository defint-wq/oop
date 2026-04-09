#include "../oop.h"

double Circle::setter(const double n, const double cx) {

    radius = n;

    crd_1 = cx;
    crd_2 = cx;

    return radius;
}

void Circle::getter() {
    cout << "Radius: " << radius << endl;
}

double Circle::area() {
    return M_PI * radius * radius;
}

double Circle::perimeter() {
    return 2 * M_PI * radius;
}

void Circle::printName() {
    cout << "Shape name: " << name << endl;
}

void Circle::showCoordinate() {
    cout << "Center: (" << crd_1 << ", " << crd_2 << ")" << endl;
}