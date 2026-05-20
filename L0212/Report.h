#ifndef REPORT_H
#define REPORT_H

#include "Person.h"
#include "MathUtils.h"

// A function that uses both Person and add()
inline int calculateBirthYear(const Person& p)
{
    int currentYear = 2026;
    return currentYear - p.age;
}

#endif
