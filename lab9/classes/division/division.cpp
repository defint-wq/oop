#include "../include.h"
#include "Division.h"

Division::Division() {}

Division::Division(string name) {
    DivisionName = name;
}

string Division::getDivisionName() const {
    return DivisionName;
}

void Division::print() const {
    cout << "Division: " << DivisionName << endl;
}