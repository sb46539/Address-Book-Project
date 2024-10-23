#include <iostream>
#include "addressBookType.h"

int main() {
    addressBookType myAddressBook;
    myAddressBook.initEntry();

    std::string testFirstName = "John";
    std::string testLastName = "Smith";
    int testMonth = 3;
    std::string testRelationship = "Friend";

    std::cout << "Searching for: " << testFirstName << " " << testLastName << std::endl;
    myAddressBook.findPerson(testFirstName, testLastName);

    std::cout << "Birthdays in Month: " << testMonth << std::endl;
    myAddressBook.findBirthdays(testMonth);

    std::cout << "Relations: " << testRelationship << std::endl;
    myAddressBook.findRelations(testRelationship);

    std::cout << "All entries in the Address Book:" << std::endl;
    myAddressBook.print();

    return 0;
}