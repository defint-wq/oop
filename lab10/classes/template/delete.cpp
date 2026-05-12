#include "template.h"

template <typename T>
void List<T>::deleteNode(int index) {
    if (head == nullptr || index < 0) {
        return;
    }

    Node<T>* temp = head;

    if (index == 0) {
        head = head->next;
        delete temp; 
        return;
    }

    Node<T>* prev = nullptr;
    for (int i = 0; i < index && temp != nullptr; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) {
        return;
    }

    prev->next = temp->next;
    delete temp;
}