#include "spouse.h"

Spouse::Spouse() : Person(), anniversaryDate("") {}

Spouse::Spouse(string name, string ssNum, int age, string anniversaryDate)
    : Person(name, ssNum, age), anniversaryDate(anniversaryDate) {}

string Spouse::getAnniversaryDate() const { return anniversaryDate; }
void   Spouse::setAnniversaryDate(string date) { anniversaryDate = date; }

void Spouse::print() const {
    Person::print();
    cout << "  Гэрлэсэн огноо: " << anniversaryDate << endl;
}