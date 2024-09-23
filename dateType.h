#include <iostream>

using namespace std;

class dateType{
  private:
    int dMonth;
    int dDay;
    int dYear;
  public:
    dateType(int month = 1, int day = 1, int year = 1900); //: dMonth(month), dDay(day), dYear(year){};
    void setDate(int month, int day, int year){
      
    };
    int getDay();
    int getMonth();
    int getYear();
    int getDaysInMonth(int month, int year);
    void printDate() const;
    bool isLeapYear(int year) const;
};