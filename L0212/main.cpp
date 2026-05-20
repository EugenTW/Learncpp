#include "Report.h"
#include "Person.h"   // <-- Error due to no Header Guard

#include <iostream>

int main()
{
    Person p;
    p.age = 30;

    std::cout << calculateBirthYear(p) << std::endl;
    return 0;
}
