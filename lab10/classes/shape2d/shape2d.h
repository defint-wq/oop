#ifndef SHAPE2D_H
#define SHAPE2D_H
#include "../shape/shape.h"
#include "../include.h"

class Shape2D : public Shape {
    public:
        Shape2D() : Shape() {};
        Shape2D(string name) : Shape(name) {};
        virtual double area() const = 0;
        virtual double perimeter() const = 0;
};

#endif