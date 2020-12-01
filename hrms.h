#ifndef HRMS_H
#define HRMS_H

#include <string>
#include <list>
#include "department.h"
#include "employee.h"
#include "salary.h"

class HRMS {
    private:
        std::list<Department> departmentList;
        std::list<Employee> employeeList;
        std::list<Salary> salaryList;

    public:
        void add(Employee employee, std::string departmentId, double salary);
        void basePrintSalaries(std::list<Salary> list);
        void changeSalary(std::string employeeId, double salary);
        Employee findEmployee(std::string empleyeeId);
        Employee findEmployeesInDepartment(std::string departmentId);
        void printDepartment(std::string departmentId);
        void printSalaries();
        void printSalariesSorted();
};

#endif
