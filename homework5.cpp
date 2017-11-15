#include <iostream>
using namespace std;
class Date {
  private:
    int month;
    int day;
    int year;
  public:
    Date() {

    }

    Date(int year,int month,int day) {
      this->year = year;
      this->month = month;
      this->day = day;
    }

    int getMonth() {
      return this->month;
    }

    void setMonth(int month) {
      this->month = month;
    }

    int getDay() {
      return this->day;
    }

    void setDay(int day) {
      this->day = day;
    }

    int getYear() {
      return this->year;
    }

    void setYear(int year) {
      this->year = year;
    }

    friend void toString(Date &d) {
      std::cout << d.year << "-" << d.month << "-" << d.day << '\n';
    }
};

int main() {
  Date date(2017,11,14);
  toString(date);
  return 0;
}
