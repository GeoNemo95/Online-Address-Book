#include <string>
using namespace std;

class Address_Type{
  private:
    string street;
    string city;
    string state;
    int zip;
  public:
    Address_Type();
    Address_Type(string street = "", string city = "", string state "XX", string zip = 10000);
    void setStreet(string street);
    void setCity(string city);
    void setState(string state);
    void setZip(string zip);
    string getStreet();
    string getCity(); 
    string getState();
    int getZip();
    void print(ostream &out);
};