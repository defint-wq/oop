#include "template.h"

template <typename T>
T List<T>::get(int index) {

    if (index < 0 || index >= len) {
        throw out_of_range("Index out of range");
    }

    Node<T>* temp = head;

    for (int i = 0; i < index; i++) {
        temp = temp->next;
    }

    return temp->shapes;
}