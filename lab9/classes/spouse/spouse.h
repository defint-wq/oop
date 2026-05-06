
#ifndef SPOUSE_H
#define SPOUSE_H

#include "../person/person.h"

struct Dates {
    int year;
    int month;
    int day;
};

class Spouse : public Person {
private:
    Dates anniversaryDate; 

public:
    Spouse();
    Spouse(string name, string ssNum, int age, Dates anniversaryDate);

    Dates getAnniversaryDate() const;
    void   setAnniversaryDate(Dates date);

    void print() const;
};

#endif 