#include "addressBookType.h"
#include <fstream>
#include <iostream>
#include <string>


addressBookType::addressBookType() : orderedLinkedList<extPersonType>() {}

void addressBookType::initEntry() {
    std::ifstream inFile("AddressBookData.txt");
    if (!inFile) {
        std::cerr << "Error opening file." << std::endl;
        return;
    }

    std::string firstName, lastName, address, city, state, phoneNumber, relationship;
    int month, day, year, zip;

    while (inFile >> firstName >> lastName) {
        inFile >> month >> day >> year;
        inFile.ignore();
        std::getline(inFile, address);
        std::getline(inFile, city);
        inFile >> state >> zip;
        inFile.ignore();
        std::getline(inFile, phoneNumber);
        std::getline(inFile, relationship);

        extPersonType newEntry(firstName, lastName, month, day, year, address, city, state, zip, phoneNumber, relationship);
        addEntry(newEntry);
    }

    inFile.close();
}

void addressBookType::addEntry(const extPersonType& newEntry) {
    insert(newEntry);
}

void addressBookType::findPerson(const std::string& lastName, const std::string& firstName) {
    nodeType<extPersonType>* current = first;
    while (current != nullptr) {
        if (current->info.getLastName() == lastName && current->info.getFirstName() == firstName) {
            current->info.print();
            return;
        }
        current = current->link;
    }
    std::cout << "Not found.\n";
}


void addressBookType::findBirthdays(int month) {
    nodeType<extPersonType>* current = first;
    bool found = false;
    while (current != nullptr) {
        if (current->info.getBirthMonth() == month) {
            current->info.print();
            found = true;
        }
        current = current->link;
    }
    if (!found) {
        std::cout << "No birthdays found!\n";
    }
}


void addressBookType::findRelations(const std::string& relationship) {
    nodeType<extPersonType>* current = first;
    bool found = false;
    while (current != nullptr) {
        if (current->info.getRelationship() == relationship) {
            current->info.print();
            found = true;
        }
        current = current->link;
    }
    if (!found) {
        std::cout << "No entries found.\n";
    }
}


void addressBookType::print() {
    nodeType<extPersonType>* current = first;
    while (current != nullptr) {
        current->info.print();
        current = current->link;
    }
}