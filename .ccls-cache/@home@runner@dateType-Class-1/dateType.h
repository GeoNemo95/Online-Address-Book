#include <iostream>

using namespace std;

class dateType{
  private:
    int dMonth;
    int dDay;
    int dYear;
  public:
    dateType(int month = 1, int day = 1, int year = 1900) : dMonth(month), dDay(day), dYear(year){};
    void setDate(int month, int day, int year){
      
    };
    int getDay(){return dDay;}
    int getMonth(){return dMonth;}
    int getYear(){return dYear;}
    bool isLeapYear(int year){
      if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        cout << "is leap year" << endl;
        return true;
      }
      else {
        cout << "is not leap year" << endl;
        return false;
      } 
    }
    int getDaysinMonth(int month, int year){
      if (month == 4 || month == 6 || month == 9 || month == 11){
        return 30;
      }
      else if (month == 2){
        if (isLeapYear(year)){
          return 29;
        }
        else{
          return 28;
        }
      }
      else{
        return 31;
      }
    }
    void print(){
      cout << dMonth << "/" << dDay << "/" << dYear << endl;
    }
};
