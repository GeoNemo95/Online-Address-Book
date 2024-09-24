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
      if (month > 12 || month < 1 || day > 31 || day < 1 || year < 1900){
        dMonth = 1;
        dDay = 1;
        dYear = 1900;
      }
      else if (int getDaysinMonth = 30){
        if (day > 30){
          dDay = 1;
        }
        else{
          dMonth = month;
          dDay = day;
          dYear = year;
        }
      }
      else if (int getDaysinMonth = 29){
        if (day > 29 || isLeapYear(year) == true){
          dDay = 1;
        }
        else{
          dMonth = month;
          dDay = day;
          dYear = year;
        }
      }
      else if (int getDaysinMonth = 28){
        if (day > 28)
          dDay = 1;
        else{
          dMonth = month;
          dDay = day;
          dYear = year;
        } 
      }
      else{
        dMonth = month;
        dDay = day;
        dYear = year;
      }
    };
    int getDay(){return dDay;}
    int getMonth(){return dMonth;}
    int getYear(){return dYear;}
    bool isLeapYear(int year){
      if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return true;
      }
      else {
        return false;
      } 
    }
    int getDaysinMonth(int xmonth, int xyear){
      if(xmonth == 1 || xmonth == 3 || xmonth == 5 || xmonth == 7 || xmonth == 8 || xmonth == 10 || xmonth == 12){
        return 31;
      }
      else if (xmonth == 4 || xmonth == 6 || xmonth == 9 || xmonth == 11){
          return 30;
      }
      else if (xmonth == 2 && isLeapYear(xyear) == true){
          return 29;
      }
      else if (xmonth == 2 && isLeapYear(xyear) == false){
          return 28;
      }
      else
          return 0;
      }
    void print(){
      cout << dMonth << "/" << dDay << "/" << dYear << endl;
    }
};
