#pragma once

#include <string>
#include "orderedLinkedList.h"
#include "extPersonType.h"

class addressBookType {
public:
    addressBookType();
    void addEntry();
    void deleteEntry(const std::string& firstName, const std::string& lastName);
    void saveEntries();
    void onExit();
    void print();

private:
    orderedLinkedList<extPersonType> entryList;
};

