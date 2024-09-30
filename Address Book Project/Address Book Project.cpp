#include <iostream>
#include "extPersonType.h"

using namespace std;

int main()
{
    cout << "Testing constructor with parameters ... " << endl;
    extPersonType person("George", "Smith");
    person.print();
    cout << endl;

}