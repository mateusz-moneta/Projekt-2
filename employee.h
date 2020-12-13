#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
    private:
        std::string id;
        std::string name;
        std::string surname;
        std::string departmentId;
        std::string position;

    public:
        Employee(std::string id, std::string name, std::string surname, std::string departmentId, std::string position);
        std::string getDepartmentId();
        std::string getFullName();
        std::string getId();
        std::string getPosition();
};

#endif
