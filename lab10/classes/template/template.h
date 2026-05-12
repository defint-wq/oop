#ifndef TEMPLATE_H
#define TEMPLATE_H

#include "../include.h"
#include "../shape/shape.h"
#include "../shape2d/shape2d.h"
#include "../circle/circle.h"
#include "../square/square.h"
#include "../triangle/triangle.h"

template <typename T>
struct Node {
    T shapes; 
    Node* next;
};

template <typename T>
class List{
    private:
        Node<T>* head;
        int len;

    public: 
        List(): head(nullptr), len(0) {}
        void add (T t);
        void insert(T t, int index);
        T get(int index);
        void delete(int index);
        int length();
};

#endif