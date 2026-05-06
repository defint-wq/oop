#ifndef PERSON_H
#define PERSON_H

#include "../include.h"

class Person {
private:
    string name; 
    string ssNum;  
    int    age;    

public:
    Person();
    Person(string name, string ssNum, int age);

    string getName()   const;
    string getSSNum()  const;
    int    getAge()    const;

    void setName(string name);
    void setSSNum(string ssNum);
    void setAge(int age);

    void print() const;
};

#endif 