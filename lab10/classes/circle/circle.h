#ifndef SHAPE_H
#define SHAPE_H
#include "../shape2d/shape2d.h"

class Circle : public Shape2D {
    private:
        double crd_1;
        double crd_2;
        double radius;
    public:
        Circle();
        Circle(double radius, double crd_1, double crd_2);
        double area() const override;
        double perimeter() const override;
        void showCoordinate();
        void setRadius(double n);
        void setX(double crd_1);
        void setY(double crd_2);
        double getRadius() const;
        double getX() const;
        double getY() const;
};

#endif