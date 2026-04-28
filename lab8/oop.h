#ifndef OOP_H
#define OOP_H

#include <string>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

struct Shapes {
    string name;
    double area;
    double perimeter;
};

class Shape {
    protected:
        string name;
        static int count;
    
    public:
        Shape();
        Shape(const string& name);       
        void setName(const string& name);
        string getName() const;
        static int getCount();
};

class Shape2D : public Shape {
    public:

        Shape2D() : Shape() {};
        Shape2D(string name) : Shape(name) {};
        virtual double area() const = 0;
        virtual double perimeter() const = 0;
};

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

void sortArea(Shape2D* list[], int n);
void sortPerimeter(Shape2D* list[], int n);
void print(Shape2D** shapes, int n);


#endif