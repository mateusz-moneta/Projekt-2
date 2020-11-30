#include "hrms.h"
#include <iostream>

void HRMS::add(Employee employee, std::string departmentId, double salary) {
    this->employeeList.push_back(employee);
    this->salaryList.push_back(Salary(employee.getId(), salary));
}

void HRMS::changeSalary(std::string employeeId, double salary) {
    for (int i = 0; i < this->salaryList.size(); i++) {
        if (this->salaryList[i].getEmployeeId() == employeeId) {
            std::cout << "Salary before change: " << this->salaryList[i].getSalary() << std::endl;
            this->salaryList[i].setSalary(salary);
            std::cout << "Salary after change: " << this->salaryList[i].getSalary() << std::endl;
        }
    }

    std::cout << std::endl;
}

void HRMS::printDepartment(std::string departmentId) {
    std::cout << "Employments in department:" << std::endl;

    for (int i = 0; i < this->employeeList.size(); i++) {
        if (this->employeeList[i].getDepartmentId() == departmentId) {
            std::cout << this->employeeList[i].getFullName() << std::endl;
        }
    }

    std::cout << std::endl;
}

void HRMS::printSalaries() {
    std::cout << "Salaries:" << std::endl;

    for (int i = 0; i < this->salaryList.size(); i++) {
        std::cout << this->salaryList[i].getSalary() << std::endl;
    }

    std::cout << std::endl;
}

void HRMS::printSalariesSorted() {}
