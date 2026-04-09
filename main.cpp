#include "oop.h"

int main () {
    Circle c;
    Square s;
    Triangle t;
    int which;

    while (true) {
        cout << "1. Circle, 2. Square, 3. Triangle, 4. Exit" << endl;
        cin >> which;
        if (which == 4) break;

        double r, x, y, side;

        switch (which)
        {
        case 1: // Circle

            cout << "Radius: ";
            cin >> r;

            cout << "Center coordinate (x y): ";
            cin >> x >> y;

            c.setName("Circle");
            c.setter(r, x);

            c.printName();
            c.showCoordinate();

            cout << "Area: " << c.area() << endl;
            cout << "Perimeter: " << c.perimeter() << endl;
            break;
        
        case 2: // Square

            cout << "Side: ";
            cin >> side;

            cout << "Top-left coordinate (x y): ";
            cin >> x >> y;

            s.setName("Square");
            s.setter(side, x, y);

            s.printName();
            s.ShowCoordinates();

            cout << "Area: " << s.area() << endl;
            cout << "Perimeter: " << s.perimeter() << endl;
            break;

        case 3: // Triangle

            cout << "Side length: ";
            cin >> side;

            cout << "Top vertex coordinate (x y): ";
            cin >> x >> y;

            t.setName("Triangle");

            t.setter(side, x, y);

            t.printName();

            t.showCoordinates();

            cout << "Area: " << t.area() << endl;
            cout << "Perimeter: " << t.perimeter() << endl;
            break;

        default:
            break;
        }
    }
    return 0;
} 