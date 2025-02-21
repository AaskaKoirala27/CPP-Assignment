//Write a C++ program to implement a class called Date that has private member variables for day, month, and year. 
//Include member functions to set and get these variables, as well as to validate if the date is valid.

#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    void getDate() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }

    bool isValidDate() {
        if (month < 1 || month > 12) {
            return false;
        }

        if (day < 1 || day > 31) {
            return false;
        }

        if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
            return false;
        }

        if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                if (day > 29) {
                    return false;
                }
            } else {
                if (day > 28) {
                    return false;
                }
            }
        }

        return true;
    }
};
int main() {
    Date date;
    date.setDate(29, 2, 2024);  
    if (date.isValidDate()) {
        date.getDate();
    } else {
        cout << "Invalid Date!" << endl;
    }
    return 0;
}