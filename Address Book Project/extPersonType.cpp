// EXECUTION FILE

#include "extPersonType.h"
#include <iostream>
extPersonType::extPersonType(std::string getFirstName, std::string getLastName)
: personType(getFirstName, getLastName) {}
void extPersonType::print() {
	std::cout << "First Name: " << getFirstName() << ", " << "Last Name: " << getLastName();
}