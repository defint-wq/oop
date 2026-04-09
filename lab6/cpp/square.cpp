#include "../oop.h"

double Square::setter(const double n, const double cx, const double cy) {

    side = n;

    x0 = cx;
    y0 = cy;

    x1 = cx + side;
    y1 = cy;

    x2 = cx + side;
    y2 = cy - side;

    x3 = cx;
    y3 = cy - side;

    return side;
}

void Square::getter() {
    cout << "Side: " << side << endl;
}

double Square::area() {
    return side * side;
}

double Square::perimeter() {
    return 4 * side;
}

void Square::printName() {
    cout << "Shape name: " << name << endl;
}

void Square::ShowCoordinates() {

    cout << "Coordinates:" << endl;

    cout << "A(" << x0 << ", " << y0 << ")" << endl;
    cout << "B(" << x1 << ", " << y1 << ")" << endl;
    cout << "C(" << x2 << ", " << y2 << ")" << endl;
    cout << "D(" << x3 << ", " << y3 << ")" << endl;

}