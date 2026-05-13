#include "functions.hpp"

void print(List<Shape2D*> &shapeList) 
{
    Node<Shape2D*> *curr = shapeList.getHead();

    int count = 1;
    while (curr)
    {
        Shape2D* shape = curr->shapes;
        if (shape) {

            cout << count << ".\t" << "Shape: " << shape->getName() << "\t\t" 
                 << "Area: " << shape->area() << endl;
        }

        curr = curr->next;
        count++;
    }
}