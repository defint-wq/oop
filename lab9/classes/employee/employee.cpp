#include "employee.h"

Employee::Employee()
{
    this->setCompanyId("0");
    this->setTitle("employee");
    this->setStartDate({0, 0, 0});
}

Employee::Employee(string companyId, string title, Date startDate)
{
    this->setCompanyId(companyId);
    this->setTitle(title);
    this->setStartDate(startDate);
}

string Employee::getCompanyId() const { return this->companyId; }

string Employee::getTitle() const  { return this->title; }

Date Employee::getStartDate() const { return this->startDate; }

void Employee::setCompanyId(string companyId) { this->companyId = companyId; }

void Employee::setTitle(string title) { this->title = title; }

void Employee::setStartDate(Date startDate) { this->startDate = startDate; }
