// 1. Write a C++ program to implement a class called Employee that has private member variables 
//for name, employeeID, and salary. 
//Include member functions to calculate and set salary based on employee performance.

#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    string name;
    int employeeID;
    double salary;
public:
    // Constructor banako
    Employee(string empName, int empID, char performanceGrade) : name(empName), employeeID(empID) {
        switch (performanceGrade) {
            case 'A':
                salary = 50000;  
                break;
            case 'B':
                salary = 40000; 
                break;
            case 'C':
                salary = 30000;  
            case 'D':
                salary = 20000;  
                break;
            default:
                cout << "Invalid performance grade! Setting salary to $0." << endl;
                salary = 0;
        }
    }
    void displayDetails() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: $" << salary << endl;
    }
};
int main() {
    string name;
    int id;
    char grade;
    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter employee ID: ";
    cin >> id;
    cout << "Enter performance grade (A/B/C/D): ";
    cin >> grade;
    Employee emp(name, id, grade);
    emp.displayDetails();
    return 0;
}