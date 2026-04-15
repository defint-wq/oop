#include "../oop.h"

void Shape::setName(const string& name) {
    this->name = name;
}

string Shape::getName() const {
    return name;
}