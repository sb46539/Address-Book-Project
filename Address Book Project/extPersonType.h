#pragma once
#include "personType.h"
class extPersonType : public personType {
private:
    std::string phoneNumber;
    std::string relationship;
   int birthMonth;
public:
    // Setters
    void setPhoneNumber(std::string pNumber) {
        phoneNumber = pNumber;
    }
    void setRelationship(std::string rShip) {
        relationship = rShip;
    }
   
    // Getters
    std::string getPhoneNumber() {
        return phoneNumber;
    }
    std::string getRelationship() {
        return relationship;
    }

    void print();
    extPersonType(std::string getFirstName, std::string getLastName);
};

// birthdate.getMonth(dMonth), birthdate.getMonth(dDay), birthdate.getMonth(dYear)
