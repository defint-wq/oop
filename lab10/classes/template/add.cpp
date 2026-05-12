#include "template.h"
#pragma once   // Давхар include-аас хамгаална

template <typename T>
void LinkedList<T>::add(T t) {
    Node* node = new Node(t);

    if (!head) {
        // Жагсаалт хоосон — шинэ node нь head болно
        head = node;
    } else {
        // Сүүл хүртэл явж, тэнд залгана
        Node* cur = head;
        while (cur->next)
            cur = cur->next;
        cur->next = node;
    }

    size++;
}