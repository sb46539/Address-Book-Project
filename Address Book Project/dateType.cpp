#include "dateType.h"
#include <iostream>


void dateType::setDate(int month, int day, int year) {
    if (month < 1 || month > 12) return;

    int daysInMonth = getDaysInMonth(month, year);
    if (day < 1 || day > daysInMonth) return;

    dMonth = month;
    dDay = day;
    dYear = year;
}


void dateType::print() const {
    std::cout << dMonth << "/" << dDay << "/" << dYear << std::endl;
}
