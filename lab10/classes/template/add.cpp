#include "template.h"

template <typename T>
void List<T>::add(T t) {
    Node<T>* newNode = new Node<T>();
    newNode->shapes = t;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } 
    else {
        Node<T>* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}