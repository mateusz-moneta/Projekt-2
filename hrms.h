#ifndef HRMS_H
#define HRMS_H

#include <string>
#include <vector>
#include "department.h"
#include "employee.h"
#include "salary.h"

class HRMS {
    private:
        std::vector<Department> departmentList;
        std::vector<Employee> employeeList;
        std::vector<Salary> salaryList;

    public:
        void add(Employee employee, std::string departmentId, double salary);
        void changeSalary(std::string employeeId, double salary);
        void printDepartment(std::string departmentId);
        void printSalaries();
        void printSalariesSorted();
};

#endif
