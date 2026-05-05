#include "person.h"
#include <iostream>
using namespace std;

Person::Person() : name(""), ssNum(""), age(0) {}

Person::Person(string name, string ssNum, int age)
    : name(name), ssNum(ssNum), age(age) {}

string Person::getName()  const { return name; }
string Person::getSSNum() const { return ssNum; }
int    Person::getAge()   const { return age; }

void Person::setName(string name)   { this->name = name; }
void Person::setSSNum(string ssNum) { this->ssNum = ssNum; }
void Person::setAge(int age)        { this->age = age; }

void Person::print() const {
    cout << "  Нэр    : " << name  << endl;
    cout << "  НД дугаар: " << ssNum << endl;
    cout << "  Нас    : " << age   << endl;
}