#include "addressBookType.h"
#include <iostream>

int main() {
    addressBookType addressBook;


    char choice;
    do {
        std::cout << "Menu:\n1. Add entry\n2. Delete entry\n3. Print entries\n4. Quit\n";
        std::cin >> choice;

        switch (choice) {
        case '1':
            addressBook.addEntry();
            break;
        case '2': {
            std::string firstName, lastName;
            std::cout << "Enter firstname: ";
            std::cin >> firstName;
            std::cout << "Enter lastname: ";
            std::cin >> lastName;
            addressBook.deleteEntry(firstName, lastName);
            break;
        }
        case '3':
            addressBook.print();
            break;
        }
    } while (choice != '4');

    addressBook.onExit();
    return 0;
}
