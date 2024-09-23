#include <string>
using namespace std;

class addressType{
  private:
    string street;
    string city;
    string state;
    int zip;
  public:
    void setAddress(string, string, string, int){
      
    };
    void setStreet(string street);
    void setCity(string city);
    void setState(string state);
    void setZipcode(string zip);
    string getStreet();
    string getCity(); 
    string getState();
    int getZip();
    void print(ostream &out);
    addressType(string street = "", string city = "", string state = "XX", int zip = 10000);
};