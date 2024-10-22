#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "extPersonType.h"

using namespace std;

class addressBookType{
  private:
    extPersonType addressList[500];
    int length;
    int maxLength;
  public:
    void initEntry(string file){
      ifstream infile("AddressBookData.txt");
      
    };
    void addEntry(extPersonType address){}
    void findPerson(string person){}
    void findBirthdays(int birth){}
    void findRelations(string rel){}
    void print(){}
    void sortEntries(){}
};