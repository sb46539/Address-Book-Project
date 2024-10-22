#pragma once


#include <string>

class extPersonType {
public:

    extPersonType(const std::string& firstName = "", const std::string& lastName = "",
        int month = 0, int day = 0, int year = 0,
        const std::string& addr = "", const std::string& city = "",
        const std::string& state = "", int zip = 0,
        const std::string& pNumber = "", const std::string& rShip = "");


    bool operator==(const extPersonType& other) const;
    bool operator!=(const extPersonType& other) const;
    bool operator>=(const extPersonType& other) const;


    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getRelationship() const;
    int getBirthMonth() const;


    void print() const;

private:
    std::string firstName;
    std::string lastName;
    std::string phoneNumber;
    std::string relationship;
    int birthMonth;

};
