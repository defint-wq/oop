#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "../shape2d/shape2d.h"

class Triangle : public Shape2D {
    private:
        double x0, y0;
        double x1, y1;
        double x2, y2;
        double side;
    public:
        Triangle();
        Triangle(double side, double x0, double y0);
        double area() const override;
        double perimeter() const override;
        void showCoordinates() const;
        void setSide(double n);
        void setCoordinates(double x0, double y0);
        double getSide();
};

#endif