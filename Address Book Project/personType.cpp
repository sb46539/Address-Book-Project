#include "personType.h"


personType::personType(std::string fName, std::string lName) {
	firstName = fName; // Initialize firstName
	lastName = lName; // Initialize lastName
}


void personType::print() {
	std::cout << "First name: " << firstName << " Last name: " << lastName << std::endl; // Defines print method
}