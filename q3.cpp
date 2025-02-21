//Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. 
//Include member functions to calculate the grade based on the marks and display the student's information.

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    float marks;

public:
    void setStudentInfo(string n, string c, int r, float m) {
        name = n;
        studentClass = c;
        rollNumber = r;
        marks = m;
    }

    void displayStudentInfo() {
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }

    string calculateGrade() {
        if (marks >= 90) return "A";
        if (marks >= 80) return "B";
        if (marks >= 70) return "C";
        if (marks >= 60) return "D";
        return "F";
    }
};

int main() {
    Student student;
    student.setStudentInfo("Prashant Koirala", "10th Grade", 15, 85);
    student.displayStudentInfo();
    return 0;
}