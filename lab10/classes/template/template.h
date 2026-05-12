#ifndef TEMPLATE_H
#define TEMPLATE_H

template <typename T>
struct Node {
    T shapes; 
    Node* next;
};

template <typename T>
class List{
    private:
        Node<T>* head;

    public: 
        List(): head(nullptr) {}
        void add (T t);
        void insert(T t, int index);
        T get(int index);
        void delete(int index);
        int length();
};

#endif