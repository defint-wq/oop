#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include "../include.hpp"
#include "../shape/shape.hpp"
#include "../shape2d/shape2d.hpp"
#include "../circle/circle.hpp"
#include "../square/square.hpp"
#include "../triangle/triangle.hpp"

template <typename T>
struct Node {
    T shapes; 
    Node* next;
};

template <typename T>
class List {
    private:
        Node<T>* head;
        int len;

    public: 
        List(): head(nullptr), len(0) {}
        void add (T t);
        void insert(T t, int index);
        Node<T>* getHead();
        T get(int index);
        void deleteNode(int index);
        int length();
};

template <typename T>
void List<T>::add(T t) 
{
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
    len++;
}

template <typename T>
void List<T>::deleteNode(int index) 
{
    if (head == nullptr || index < 0) {
        return;
    }
    Node<T>* temp = head;

    if (index == 0) {
        head = head->next;
        delete temp; 
        len--;
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
    len--;
}

template<typename T>
Node<T>* List<T>::getHead() { return head; }

template <typename T>
int List<T>::length() 
{
    return len;
}

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

#endif