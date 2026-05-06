#include "../include.h"
#include "division.h"

Division::Division() {}

Division::Division(string name) {
    divisionName = name;
}

string Division::getDivisionName() const {
    return divisionName;
}

void Division::print() const {
    cout << "Салбар: " << divisionName << endl;
}