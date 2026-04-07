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
        void setName(const string& name);
        string getName() const;
};

class Shape2D : public Shape {
    public:
        virtual double area() = 0;
        virtual double perimeter() = 0;
};

class Circle : public Shape2D {
    private:
        double crd_1;
        double crd_2;
        double radius;
    public:
        double area() override;
        double perimeter() override;

        void printName();
};

class Square : public Shape2D {
    private:
        double x0, y0;
        double x1, y1;
        double x2, y2;
        double x3, y3;
        double side;
    public:
        double area() override;
        double perimeter() override;
        void printName();
};

class Triangle : public Shape2D {
    private:
        double x0, y0;
        double x1, y1;
        double x2, y2;
    public:
        double area() override;
        double perimeter() override;
        void printName();    
};

#endif