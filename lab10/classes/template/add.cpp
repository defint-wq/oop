#include "template.h"

template <typename T>
void LinkedList<T>::add(T t) {
    Node<T>* newNode = new Node<T>(t);
    
    if (head == nullptr) {
        head = newNode;
    } else {
        Node<T>* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    _length++; 
}