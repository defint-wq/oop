#include "../oop.h"

int Shape::count = 0;

void Shape::setName(const string& name) {
    this->name = name;
}

string Shape::getName() const {
    return name;
}

int Shape::getCount() {
    return count;
}
