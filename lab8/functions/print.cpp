#include "../oop.h"

void print(Shape2D** shapes) {
    for (int i = 0; i < obj_count(); i++) {
        cout << "Name: " << shapes[i]->getName() << "    Area: " << shapes[i]->area() << "    Perimeter: " << shapes[i]->perimeter() << endl;
    }
}