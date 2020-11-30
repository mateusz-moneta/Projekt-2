#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <string>

class Department {
    private:
        std::string id;
        std::string name;

    public:
        Department(std::string id, std::string name);
};


#endif
