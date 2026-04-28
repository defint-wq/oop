#include "../oop.h"

int Shape::count = 0;

Shape::Shape() : name("Shape") { Shape::count++; }
Shape::Shape(const string& name) : name(name) { Shape::count++; }        

void Shape::setName(const string& name) {
    this->name = name;
}

string Shape::getName() const {
    return name;
}

int Shape::getCount() {
    return count;
}
