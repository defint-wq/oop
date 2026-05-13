#include "template.h"

template <typename T>
void List<T>::insert(T t, int index) {
    if (index < 0 || index > len)
        return;

    Node<T>* newNode = new Node<T>();
    newNode->shapes = t;
    newNode->next = nullptr;

    if (index == 0) {
        newNode->next = head;
        head = newNode;
    } 
    else {
        Node<T>* temp = head;

        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    len++;
}