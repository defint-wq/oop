#include "oop.h"

int main () {
    int n, k;
    cout << "How many objects: ";
    cin >> n;

    Shape2D **shapes = new Shape2D*[n];

    for (int i = 0; i < n; i++) {
        cout << "1. Make circle   2. Make square   3. Make triangle" << endl;
        cin >> k;
        
        double side, radius;

        switch (k)
        {
        case 1:
            cout << "Radius: ";
            cin >> radius;
            shapes[i] = new Circle(radius);
            break;
        
        case 2:
            cout << "Side: ";
            cin >> side;
            shapes[i] = new Square(side);
            break;

        case 3:
            cout << "Side: ";
            cin >> side;
            shapes[i] = new Triangle(side);
            break;
            
        default:
            cout << "Invalid choice" << endl;
            i--;
            continue;
        }
    }

    sortArea(shapes, n);
    
    print(shapes, n);

    sortPerimeter(shapes, n);

    print(shapes, n);

    for (int i = 0; i < n; i++) {
        delete shapes[i];
    }
    delete[] shapes;

    return 0;
}