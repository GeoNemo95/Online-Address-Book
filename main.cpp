#include <iostream>
#include "addressType.h"

using namespace std;

int main()
{
    cout << "Testing default constructor ... " << endl;
    addressType defAddress;
    defAddress.print();
    cout << endl;

    cout << "Testing constructor with parameters ... " << endl;
    addressType address("123 South Street", "Newport News", "VA", 23664);
    address.print();
    cout << endl;

    cout << "Testing invalid state (Virginia)... " << endl;
    address.setState("Virginia");
    address.print();
    cout << endl;

    cout << "Testing invalid zipcode (55555555)..." << endl;
    address.setZipcode(55555555);
    address.print();
    cout << endl;

    cout << "Testing valid address ..." << endl;
    address.setStreet("44 East Main Street"); //changed from setAddress to setStreet as there weren't enough arguments for setAddress
    address.setCity("Hampton");
    address.setState("VA");
    address.setZipcode(23669);
    address.print();
    cout << endl;
}
