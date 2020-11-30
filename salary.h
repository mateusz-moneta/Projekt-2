#ifndef SALARY_H
#define SALARY_H

#include <string>

class Salary {
    private:
        std::string employeeId;
        double salary;

    public:
        Salary(std::string employeeId, double salary);
        std::string getEmployeeId();
        double getSalary();
        void setSalary(double salary);
};

#endif
