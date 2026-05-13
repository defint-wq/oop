#ifndef SHAPE2D_HPP
#define SHAPE2D_HPP
#include "../shape/shape.hpp"
#include "../include.hpp"

class Shape2D : public Shape {
    public:
        Shape2D() : Shape() {};
        Shape2D(string name) : Shape(name) {};
        virtual double area() const = 0;
        virtual double perimeter() const = 0;
};

#endif