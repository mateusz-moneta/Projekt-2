#include "salary.h"

Salary::Salary(std::string employeeId, double salary) {
    this->employeeId = employeeId;
    this->salary = salary;
}

std::string Salary::getEmployeeId() {
    return this->employeeId;
}

double Salary::getSalary() {
    return this->salary;
}

void Salary::setSalary(double salary) {
    this->salary = salary;
}
