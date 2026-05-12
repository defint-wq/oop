#ifndef SQUARE_H
#define SQUARE_H
#include "../shape2d/shape2d.h"

class Square : public Shape2D {
    private:
        double x0, y0;
        double x1, y1;
        double x2, y2;
        double x3, y3;
        double side;
    public:
        Square();
        Square(double side, double x0, double y0);
        double area() const override;
        double perimeter() const override;
        void ShowCoordinates() const;
        void setSide(const double side);
        void setCoordinates(double x0, double y0);
        double getSide() const;
};


#endif