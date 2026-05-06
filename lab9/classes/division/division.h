#ifndef DIVISION_H
#define DIVISION_H

#include "../include.h"

class Division {
private:
    string divisionName;

public:
    Division();
    Division(string name);

    string getDivisionName() const;
    void print() const;
};

#endif