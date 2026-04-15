#ifndef OOP_H
#define OOP_H

#include<string>
#include<iostream>
#include<cmath>
using namespace std;

class Shape {
    protected:
        string name;
    public:
        Shape() {};
        Shape(string name) { this->name = name; }
        void setName(const string& name);
        string getName() const;
};

class Shape2D : public Shape {
    public:

        Shape2D() : Shape() {};
        Shape2D(string name) : Shape(name) {}
        virtual double area() = 0;
        virtual double perimeter() = 0;
};

class Circle : public Shape2D {
    private:
        double crd_1;
        double crd_2;
        double radius;
    public:
        Circle() : Shape2D("Circle") {
            radius = 0;
            crd_1 = 0;
            crd_2 = 0;
        }
        Circle(double r) : Shape2D("Circle") {
            radius = r;
        }        

        double area() override;
        double perimeter() override;
        void showCoordinate();
        void printName();
        double setter(const double n, const double cx);
        void getter();

};

class Square : public Shape2D {
    private:
        double x0, y0;
        double x1, y1;
        double x2, y2;
        double x3, y3;
        double side;
    public:
        Square() : Shape2D("Square") {
        side = 0;
        }

        Square(double s) : Shape2D("Square") {
        side = s;
        }

        double area() override;
        double perimeter() override;
        void printName();
        void ShowCoordinates();
        double setter(const double n, const double cx, const double cy);
        void getter();

};

class Triangle : public Shape2D {
    private:
        double x0, y0;
        double x1, y1;
        double x2, y2;
        double side;
    public:
        Triangle() : Shape2D("Triangle") {
        side = 0;
        }

        Triangle(double a) : Shape2D("Triangle") {
        side = a;
        }
        double area() override;
        double perimeter() override;
        void printName();    
        void showCoordinates();
        double setter(const double n, const double cx, const double cy);
        void getter();
};

int max(double *areas, int n);

#endif