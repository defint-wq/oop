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
        Shape() { count ++; }
        Shape(const string& name) : name(name) { count++; }        
        void setName(const string& name);
        string getName() const;
        static int getCount();
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
        void setRadius(const double n);
        void setX(const double crd_1);
        void setY(const double crd_2);
        double getRadius();
        double getX();
        double getY();

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
        void ShowCoordinates();
        void setSide(const double side);
        void setCoordinates(const double x0, const double y0);
        double getSide();
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
        void showCoordinates();
        void setSide(const double n);
        void setCoordinates(const double x0, const double y0);
        double getSide();
};

void sortArea(Shape2D* list[], int n);
void sortPerimeter(Shape2D* list[], int n);
void print(Shape2D** shapes, int n);


#endif