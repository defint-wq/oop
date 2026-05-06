#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "../person/person.h"
#include "../jobDescription/jobDescription.h"
#include "../division/division.h"
#include "../child/child.h"
#include "../spouse/spouse.h"

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
        vector<JobDescription> jobDescriptions;
        vector<Child> children;
        Spouse spouse;
        Division division;
    public:
        Employee();
        Employee(string name, string ssNum, int age, string companyId, string title, Date startDate, JobDescription initialJob, Division division, Spouse spouse, Child children);
        string getCompanyId() const;
        string getTitle() const;
        Date getStartDate() const;
        void setCompanyId(string companyId);
        void setTitle(string title);
        void setStartDate(Date startDate);
        void setChildren(Child child);
        void setDivision(Division division);
        void setSpouse(Spouse spouse);
        void setJobDescriptions(JobDescription job);
        void print() const;
};

#endif