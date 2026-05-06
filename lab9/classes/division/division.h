#ifndef DIVISION_H
#define DIVISION_H

#include "../include.h"

class Division {
private:
    std::string DivisionName;

public:
    Division();
    Division(std::string name);

    std::string getDivisionName() const;
    void print() const;
};

#endif