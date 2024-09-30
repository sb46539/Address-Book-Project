#pragma once
#include <string>
#include <iostream>
class personType // Declares class
{
private:
	std::string firstName; // Declares string variable firstName
	std::string lastName; // Declares string variable lastName

public:
	// Setters
	void setFirstName(std::string fName) { // Initializes the member variable firstName to the identifier fName (for clarity between member variable vs. input value)
		firstName = fName;
	}
	void setLastName(std::string lName) { // Initializes the member variable lastName to the identifier lName (for clarity between member variable vs. input value)
		lastName = lName;
	}

	// Getters
	std::string getFirstName() { // This function, meanwhile, returns the value of the member variable firstName.
		return firstName;
	}
	std::string getLastName() { // This function also returns the value of the member function, but for lastName
		return lastName;
	}
	void print(); // Displays the objects data
	personType(std::string fName = "", std::string lName = ""); // This is a constructor that takes parameters fName and lName (sets initial values or properties of object when created)



};

