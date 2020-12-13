#ifndef HRMS_H
#define HRMS_H

#include <list>
#include <map>
#include <string>

#include "department.h"
#include "employee.h"
#include "salary.h"

class HRMS {
    private:
        std::map<std::string, std::string> departmentMap;
        std::list<Employee> employeeList;
        std::list<Salary> salaryList;

    public:
        HRMS();
        void add(Employee employee, std::string departmentId, double salary);
        void basePrintSalaries(std::list<Salary> list);
        void changeSalary(std::string employeeId, double salary);
        Employee findEmployee(std::string empleyeeId);
        void printDepartment(std::string departmentId);
        void printSalaries();
        void printSalariesSorted();
};

#endif
