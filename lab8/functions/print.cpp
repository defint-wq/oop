#include "../oop.h"

void print(Shape2D** shapes, int n) {
        for (int i = 0; i < n; i++) {
        cout << "Name: " << shapes[i]->getName() << "    Area: " << shapes[i]->area() << "    Perimeter: " << shapes[i]->perimeter() << endl;
    }
}