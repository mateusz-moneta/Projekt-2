#include <iostream>
#include "employee.h"
#include "hrms.h"

int main() {
    HRMS hrms;
    hrms.add(Employee("1", "Mateusz", "Moneta", "1", "Front-end Developer"), "1", 7800);
    hrms.printDepartment("1");
    hrms.printSalaries();
    hrms.changeSalary("1", 9000);
    hrms.printSalaries();
    return 0;
}
