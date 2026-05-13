#include "template.hpp"

template <typename T>
T List<T>::get(int index) {
    if (index < 0 || index >= len) {
        return nullptr;
    }

    Node<T>* current = head;
    int currentIndex = 0;

    while (current != nullptr) {
        if (currentIndex == index) {
            return current->shapes; 
        }
        current = current->next;
        currentIndex++;
    }

    return T();
}