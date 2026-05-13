#include "functions.h"

template <typename T>
void sortByArea(List<T> &shapeList) {
    Node<T>* head = shapeList.getHead(); 
    
    if (head == nullptr || head->next == nullptr) return;

    bool swapped;
    Node<T>* ptr1;
    Node<T>* lptr = nullptr;

    do {
        swapped = false;
        ptr1 = head;

        while (ptr1->next != lptr) {
            if (ptr1->shapes->area() > ptr1->next->shapes->area()) {
                T temp = ptr1->shapes;
                ptr1->shapes = ptr1->next->shapes;
                ptr1->next->shapes = temp;
                swapped = true;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}
