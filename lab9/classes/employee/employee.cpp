#include "employee.h"

Employee::Employee()
{
    this->setCompanyId("0");
    this->setTitle("employee");
    this->setStartDate({0, 0, 0});
}

Employee::Employee(string name, string ssNum, int age, string companyId, string title, Date startDate, JobDescription initialJob, Division division, Spouse spouse, Child children)
{
    this->setName(name);
    this->setSSNum(ssNum);
    this->setAge(age);

    this->setCompanyId(companyId);
    this->setTitle(title);
    this->setStartDate(startDate);

    this->setJobDescriptions(initialJob);
    this->setChildren(children);

    this->setDivision(division);
    this->setSpouse(spouse);
}

string Employee::getCompanyId() const { return this->companyId; }

string Employee::getTitle() const  { return this->title; }

Date Employee::getStartDate() const { return this->startDate; }

void Employee::setCompanyId(string companyId) { this->companyId = companyId; }

void Employee::setTitle(string title) { this->title = title; }

void Employee::setStartDate(Date startDate) { this->startDate = startDate; }

void Employee::setChildren(Child child) { this->children.push_back(child); }

void Employee::setDivision(Division division) { this->division = division; }

void Employee::setSpouse(Spouse spouse) { this->spouse = spouse; }

void Employee::setJobDescriptions(JobDescription job) { this->jobDescriptions.push_back(job); }

void Employee::print() const
{
    cout << "\n==========================================" << endl;
    cout << "          АЖИЛТНЫ ДЭЛГЭРЭНГҮЙ ХУУДАС" << endl;
    cout << "==========================================" << endl;

    // 1. Person классын мэдээлэл
    // Удамшсан классын функцийг дуудаж байна
    this->Person::print(); 

    // 2. Ажилтны албан тушаалын мэдээлэл
    cout << "Ажилтны ID: " << this->getCompanyId() << endl;
    cout << "Албан тушаал: " << this->getTitle() << endl;
    
    // 3. Ажилд орсон огноо
    cout << "Ажилд орсон: " << this->startDate.year << "/" 
         << this->startDate.month << "/" << this->startDate.day << endl;

    // 4. Хэлтэс 
    cout << "Хэлтэс: " << this->division.getDivisionName() << endl;

    // 5. Гэр бүлийн байдал
    cout << "\n--- Гэр бүлийн хүн ---" << endl;
    this->spouse.print(); 

    // 6. Ажлын тодорхойлолтууд
    cout << "\n--- Ажлын тодорхойлолтууд ---" << endl;
    for (size_t i = 0; i < jobDescriptions.size(); ++i) {
        jobDescriptions[i].print(); 
    }

    // 7. Хүүхдүүдийн мэдээлэл
    if (children.empty()) {
        cout << "\nХүүхэдгүй." << endl;
    } else {
        cout << "\n--- Хүүхдүүд ---" << endl;
        for (const auto& child : children) {
            child.print(); 
        }
    }
    cout << "==========================================\n" << endl;
}