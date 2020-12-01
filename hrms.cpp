#include "hrms.h"
#include <iostream>
#include <algorithm>

void HRMS::add(Employee employee, std::string departmentId, double salary) {
    this->employeeList.push_back(employee);
    this->salaryList.emplace_back(Salary(employee.getId(), salary));
}

void HRMS::changeSalary(std::string employeeId, double salary) {
    std::list<Salary>::iterator it = std::find_if(this->salaryList.begin(), this->salaryList.end(), [employeeId](Salary obj) {
        return obj.getEmployeeId() == employeeId;
    });

    if (it != this->salaryList.end()) {
        std::cout << "Salary before change: " << it->getSalary() << std::endl;
        it->setSalary(salary);
        std::cout << "Salary after change: " << it->getSalary() << std::endl;
    }

    std::cout << std::endl;
}

Employee HRMS::findEmployee(std::string employeeId) {
    std::list<Employee>::iterator it = std::find_if(this->employeeList.begin(), this->employeeList.end(), [employeeId](Employee obj) {
        return obj.getId() == employeeId;
    });

    return *it;
}

void HRMS::printDepartment(std::string departmentId) {
    std::list<Employee>::iterator it = std::find_if(this->employeeList.begin(), this->employeeList.end(), [departmentId](Employee obj) {
        return obj.getDepartmentId() == departmentId;
    });

    std::cout << "Employments in department:" << std::endl;

    if (it != this->employeeList.end()) {
        std::cout << it->getFullName() << std::endl;
    }

    std::cout << std::endl;
}

void HRMS::basePrintSalaries(std::list<Salary> list) {
    std::list<Salary>::iterator it;

    std::cout << "Salaries:" << std::endl;

    for (it = list.begin(); it != list.end(); ++it) {
        Employee employee = this->findEmployee(it->getEmployeeId());
        std::cout << employee.getFullName() << ": " << it->getSalary() << std::endl;
    }

    std::cout << std::endl;
}

void HRMS::printSalaries() {
    this->basePrintSalaries(this->salaryList);
}

void HRMS::printSalariesSorted() {
    std::list<Salary> copySalaryList = this->salaryList;
    copySalaryList.sort([](Salary &f, Salary &s) { return f.getSalary() < s.getSalary(); });
    this->basePrintSalaries(copySalaryList);
}
