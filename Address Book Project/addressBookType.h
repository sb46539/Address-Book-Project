#pragma once
#include <string>
#include "orderedLinkedList.h"
#include "extPersonType.h"

class addressBookType : public orderedLinkedList<extPersonType> {
public:
    addressBookType();

    void initEntry();
    void addEntry(const extPersonType& newEntry);
    void findPerson(const std::string& lastName, const std::string& firstName);
    void findBirthdays(int month);
    void findRelations(const std::string& relationship);
    void print();
};