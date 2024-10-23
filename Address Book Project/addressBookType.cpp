#include "addressBookType.h"
#include <iostream>
#include <fstream>


addressBookType::addressBookType() {

}


void addressBookType::addEntry() {
    std::string firstName, lastName, address, city, state, phoneNumber, relationship;
    int month, day, year, zip;

    std::cout << "Enter firstname: ";
    std::cin >> firstName;
    std::cout << "Enter lastname: ";
    std::cin >> lastName;
    std::cout << "Enter birth month: ";
    std::cin >> month;
    std::cout << "Enter birth day: ";
    std::cin >> day;
    std::cout << "Enter birth year: ";
    std::cin >> year;
    std::cout << "Enter address: ";
    std::cin.ignore();
    std::getline(std::cin, address);
    std::cout << "Enter city: ";
    std::getline(std::cin, city);
    std::cout << "Enter state: ";
    std::getline(std::cin, state);
    std::cout << "Enter zip code: ";
    std::cin >> zip;
    std::cout << "Enter phone number: ";
    std::cin >> phoneNumber;
    std::cout << "Enter relationship: ";
    std::cin >> relationship;


    extPersonType newEntry(firstName, lastName, month, day, year, address, city, state, zip, phoneNumber, relationship);
    entryList.insert(newEntry);
}


void addressBookType::deleteEntry(const std::string& firstName, const std::string& lastName) {
    extPersonType entryToDelete(firstName, lastName);
    entryList.deleteNode(entryToDelete);
}


void addressBookType::saveEntries() {
    std::ofstream outFile("AddressBookData.txt");
    if (!outFile) {
        std::cerr << "Error." << std::endl;
        return;
    }

    outFile.close();
}


void addressBookType::onExit() {
    saveEntries();
}


void addressBookType::print() {
    std::cout << "Printing all entries..." << std::endl;

}
