#pragma once
#include "addressType.h"

class dateType : public addressType {
private:
    int dMonth;
    int dDay;
    int dYear;

public:
    dateType(int month = 1, int day = 1, int year = 1900) {
        setDate(month, day, year);
    }

    void setDate(int month, int day, int year);

    int getDay() const;
    int getMonth() const;
    int getYear() const;

    int getDaysInMonth(int month, int year) const {
        if (month == 2) {
            if (isLeapYear(year)) {
                return 29;
            }
            else {
                return 28;
            }
        }
        if (month == 4 || month == 6 || month == 9 || month == 11) {
            return 30;
        }
        return 31;
    }

    bool isLeapYear(int year) const {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    void print() const;
};
