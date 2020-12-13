#include <iostream>
#include "employee.h"
#include "hrms.h"

int main() {
    HRMS hrms;
    hrms.add(Employee("1", "Mateusz", "Moneta", "1", "Front-end Developer"), "1", 7800);
    hrms.add(Employee("2", "Oliwia", "Walczak", "1", "Financial Analyst"), "1", 6400);
    hrms.add(Employee("3", "Izydor", "Goralec", "1", "Financial Analyst"), "1", 6600);
    hrms.add(Employee("4", "Laura", "Kohler", "2", "Financial Analyst"), "2", 4200);
    hrms.add(Employee("5", "Sabine", "Boehm", "2", "Financial Analyst"), "2", 4500);
    hrms.add(Employee("6", "Stefanie", "Klein", "2", "Financial Analyst"), "2", 3900);
    hrms.add(Employee("7", "Harrison", "Wyatt", "3", "C# Developer"), "3", 4400);
    hrms.add(Employee("8", "Maddison", "Wheeler", "3", "Financial analyst"), "3", 3500);
    hrms.add(Employee("9", "Leon", "Dobson", "3", "C# Developer"), "3", 4800);
    hrms.add(Employee("10", "Mollie", "King", "3", "Financial Analyst"), "3", 3200);
    hrms.printDepartment("1");
    hrms.printSalariesSorted();
    hrms.changeSalary("1", 9000);
    hrms.printSalaries();
    return 0;
}
