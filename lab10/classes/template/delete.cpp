#include "template.h"

template <typename T>
void LinkedList<T>::remove(int index) {
    if (index < 0 || index >= _length || head == nullptr) {
        return;
    }

    Node<T>* temp = head;

    // 2. Хэрэв хамгийн эхний элементийг (index 0) устгах бол
    if (index == 0) {
        head = head->next;
        delete temp;  
    } 
    else {
        Node<T>* prev = nullptr;
        for (int i = 0; i < index; i++) {
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        delete temp; 
    }
    _length--;
}