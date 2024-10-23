#include "extPersonType.h"

extPersonType::extPersonType(const std::string& firstName, const std::string& lastName,
    int month, int day, int year,
    const std::string& addr, const std::string& city,
    const std::string& state, int zip,
    const std::string& pNumber, const std::string& rShip)
    : firstName(firstName), lastName(lastName), phoneNumber(pNumber),
    relationship(rShip), birthMonth(month) {

}

bool extPersonType::operator==(const extPersonType& other) const {
    std::string key1 = lastName + " " + firstName;
    std::string key2 = other.lastName + " " + other.firstName;
    return key1 == key2;
}

bool extPersonType::operator!=(const extPersonType& other) const {
    return !(*this == other);
}

bool extPersonType::operator>=(const extPersonType& other) const {
    std::string key1 = lastName + " " + firstName;
    std::string key2 = other.lastName + " " + other.firstName;
    return key1 >= key2;
}

std::string extPersonType::getFirstName() const {
    return firstName;
}

std::string extPersonType::getLastName() const {
    return lastName;
}

std::string extPersonType::getRelationship() const {
    return relationship;
}

int extPersonType::getBirthMonth() const {
    return birthMonth;
}

void extPersonType::print() const {
    std::cout << "First name: " << firstName
        << ", Last name: " << lastName
        << ", Month: " << birthMonth
        << ", Phone number: " << phoneNumber
        << ", Relationship: " << relationship << std::endl;
}
