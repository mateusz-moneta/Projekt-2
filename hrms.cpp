#include "hrms.h"
#include <iostream>
#include <algorithm>
#include <map>

HRMS::HRMS() {
    this->departmentMap.insert(std::pair<std::string, std::string >("1", "PwC Polska"));
    this->departmentMap.insert(std::pair<std::string, std::string >("2", "PwC Germany"));
    this->departmentMap.insert(std::pair<std::string, std::string >("3", "PwC UK"));
}

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
    std::list<Employee> employeesInDepartmentList;
    std::copy_if(this->employeeList.begin(), this->employeeList.end(), std::back_inserter(employeesInDepartmentList), [&departmentId](Employee obj){
        return obj.getDepartmentId() == departmentId;
    });
    std::list<Employee>::iterator it;

    std::cout << "Employments in " << this->departmentMap[departmentId] << ":" << std::endl;

    for (it = employeesInDepartmentList.begin(); it != employeesInDepartmentList.end(); ++it) {
        std::cout << it->getFullName() << " - " << it->getPosition() << std::endl;
    }

    std::cout << std::endl;
}

void HRMS::basePrintSalaries(std::list<Salary> list) {
    std::list<Salary>::iterator it;

    for (it = list.begin(); it != list.end(); ++it) {
        Employee employee = this->findEmployee(it->getEmployeeId());
        std::cout << employee.getFullName() << " - " << employee.getPosition() << " (" << this->departmentMap[employee.getDepartmentId()] << "): " << it->getSalary() << std::endl;
    }

    std::cout << std::endl;
}

void HRMS::printSalaries() {
    std::cout << "Salaries:" << std::endl;
    this->basePrintSalaries(this->salaryList);
}

void HRMS::printSalariesSorted() {
    std::cout << "Sorted salaries:" << std::endl;
    std::list<Salary> copySalaryList = this->salaryList;
    copySalaryList.sort([](Salary &f, Salary &s) { return f.getSalary() > s.getSalary(); });
    this->basePrintSalaries(copySalaryList);
}
