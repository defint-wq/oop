#include "printObj.h"

void printObj(const vector<Employee> &employees)
{
    for (const auto& employee : employees) {
        employee.print();
    }
}