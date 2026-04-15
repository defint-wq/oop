#include "oop.h"

int main () {
    int n = 3;
    Shape2D *shapes[n] = {new Square(3), new Triangle(3), new Circle(3)};
    double* k = new double[n];

    for (int i = 0; i < n; i++) k[i] = shapes[i]->area();

    int x = max(k, n);

    cout << "Hamgiin tom ni ";

    switch (x)
    {
    case 0:
        cout << "Square" << endl;
        break;
    
    case 1:
        cout << "Triangle" << endl;
        break;

    case 2: 
        cout << "Circle" << endl;
        break;

    default:
        break;
    }

    for (int i = 0; i < n; i++) {
        delete shapes[i];
    }
    delete[] k;

    return 0;
} 