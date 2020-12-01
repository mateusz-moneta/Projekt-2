#include "employee.h"
#include <string>

Employee::Employee(std::string id, std::string name, std::string surname, std::string departmentId, std::string position) {
    this->id = id;
    this->name = name;
    this->surname = surname;
    this->departmentId = departmentId;
    this->position = position;
}

std::string Employee::getDepartmentId() {
    return this->departmentId;
}

std::string Employee::getFullName() {
    return this->name + " " + this->surname;
}

std::string Employee::getId() {
    return id;
}
