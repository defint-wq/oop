
#ifndef SPOUSE_H
#define SPOUSE_H

#include "../person/person.h"

class Spouse : public Person {
private:
    string anniversaryDate; 

public:
    Spouse();
    Spouse(string name, string ssNum, int age, string anniversaryDate);

    string getAnniversaryDate() const;
    void   setAnniversaryDate(string date);

    void print() const override;
};

#endif 