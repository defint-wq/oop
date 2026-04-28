#include "../oop.h"

void sortArea(Shape2D* list[]) {
    cout << endl;
    for (int i = 1; i < obj_count(); i++) {
        Shape2D* key = list[i];
        int j = i - 1;

        while (j >= 0 && list[j]->area() > key->area()) {
            list[j + 1] = list[j];
            j--;
        }
        list[j + 1] = key;
    }
    cout << "Sorted by Area..." << endl;
}

void sortPerimeter(Shape2D* list[]) {
    cout << endl;
    for (int i = 1; i < obj_count(); i++) {
        Shape2D* key = list[i];
        int j = i - 1;

        while (j >= 0 && list[j]->perimeter() > key->perimeter()) {
            list[j + 1] = list[j];
            j--;
        }
        list[j + 1] = key;
    }
    cout << "Sorted by Perimeter..." << endl;
}