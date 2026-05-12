#include "oop.h"

int main () {
    int k;
    int cap = 2;
    int siz = 0;

    Shape2D **shapes = new Shape2D*[cap];

    while (true) {
        cout << "1. Make circle   2. Make square   3. Make triangle   4. Exit" << endl;
        cin >> k;
        
        double side, radius;
        
        if (k == 4) break;

        if (siz == cap) {
            cap *= 2;

            Shape2D **newArr = new Shape2D*[cap];

            for (int i = 0; i < siz; i++) {
                newArr[i] = shapes[i];
            }

            delete[] shapes;
            shapes = newArr;
        }

        switch (k)
        {
        case 1:
            cout << "Radius: ";
            cin >> radius;
            shapes[siz++] = new Circle(radius, 0, 0);
            break;
        
        case 2:
            cout << "Side: ";
            cin >> side;
            shapes[siz++] = new Square(side, 0, 0);
            break;

        case 3:
            cout << "Side: ";
            cin >> side;
            shapes[siz++] = new Triangle(side, 0, 0);
            break;
            
        default:
            cout << "Invalid choice" << endl;
            continue;
        }
    }
    int n = 0;
    sortArea(shapes);
    
    print(shapes);

    sortPerimeter(shapes);

    print(shapes);

    cout << endl << obj_count() << " objects created." << endl;

    for (int i = 0; i < n; i++) {
        delete shapes[i];
    }
    delete[] shapes;

    return 0;
}