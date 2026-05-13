#include "functions.hpp"

void sortByArea(List<Shape2D*> &shapeList) {
    Node<Shape2D*>* head = shapeList.getHead(); 
    
    if (head == nullptr || head->next == nullptr) return;

    cout << Shape::getCount() << " objects sorting..." << endl << endl;
    bool swapped;
    Node<Shape2D*>* ptr1;
    Node<Shape2D*>* lptr = nullptr;

    do {
        swapped = false;
        ptr1 = head;

        while (ptr1->next != lptr) {
            if (ptr1->shapes->area() > ptr1->next->shapes->area()) {
                Shape2D* temp = ptr1->shapes;
                ptr1->shapes = ptr1->next->shapes;
                ptr1->next->shapes = temp;
                swapped = true;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}