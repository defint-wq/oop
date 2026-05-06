#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "../person/person.h"

struct Date {
    int year;
    int month;
    int day;
};

class Employee : public Person {
    private:
        string companyId;
        string title;
        Date startDate;
    public:
        Employee();
        Employee(string companyId, string title, Date startDate);
        string getCompanyId() const;
        string getTitle() const;
        Date getStartDate() const;
        void setCompanyId(string companyId);
        void setTitle(string title);
        void setStartDate(Date startDate);
};

#endif