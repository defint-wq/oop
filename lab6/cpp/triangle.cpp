#include "../oop.h"

double Triangle::setter(const double n, const double cx, const double cy) {

    side = n;

    x0 = cx;
    y0 = cy;

    x1 = cx - side/2;
    y1 = cy - (sqrt(3)/2)*side;

    x2 = cx + side/2;
    y2 = cy - (sqrt(3)/2)*side;

    return side;
}

void Triangle::getter() {
    cout << "Side: " << side << endl;
}

double Triangle::area() {
    return (sqrt(3)/4) * side * side;
}

double Triangle::perimeter() {
    return 3 * side;
}

void Triangle::printName() {
    cout << "Shape name: " << name << endl;
}

void Triangle::showCoordinates() {

    cout << "Coordinates:" << endl;

    cout << "A(" << x0 << ", " << y0 << ")" << endl;
    cout << "B(" << x1 << ", " << y1 << ")" << endl;
    cout << "C(" << x2 << ", " << y2 << ")" << endl;
}