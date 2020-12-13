#ifndef HRMS_H
#define HRMS_H

#include <list>
#include <map>
#include <string>

#include "employee.h"
#include "salary.h"

class HRMS {
    private:
        std::map<std::string, std::string> departmentMap;
        std::list<Employee> employeeList;
        std::list<Salary> salaryList;
        void basePrintSalaries(std::list<Salary> list);
        Employee findEmployee(std::string employeeId);

    public:
        HRMS();
        void add(Employee employee, std::string departmentId, double salary);
        void changeSalary(std::string employeeId, double salary);
        void printDepartment(std::string departmentId);
        void printSalaries();
        void printSalariesSorted();
};

#endif
