#include "oop.h"

int main () {
    Circle c;
    Square s;
    Triangle t;
    int which;

    while (true) {
        cout << "1. Circle, 2. Square, 3. Triangle, 4. Exit\n" << endl;
        cin >> which;
        if (which == 4) break;

        switch (which)
        {
        case 1: // Circle
            break;
        
        case 2: // Square
            break;

        case 3: // Triangle
            break;

        default:
            break;
        }
    }
    return 0;
} 