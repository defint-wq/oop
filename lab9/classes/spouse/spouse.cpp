#include "spouse.h"

Spouse::Spouse() : Person(), anniversaryDate({0, 0, 0}) {}

Spouse::Spouse(string name, string ssNum, int age, Dates anniversaryDate) {
    this->setName(name);
    this->setSSNum(ssNum);
    this->setAge(age);

    this->anniversaryDate = anniversaryDate;
}

Dates Spouse::getAnniversaryDate() const { 
    return anniversaryDate; 
}

void Spouse::setAnniversaryDate(Dates date) { 
    anniversaryDate = date; 
}

void Spouse::print() const {
    this->Person::print(); 
    
    cout << "Гэрлэсэн огноо: " << anniversaryDate.year << "/" 
         << anniversaryDate.month << "/" << anniversaryDate.day << endl;
}