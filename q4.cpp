//Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides.
// Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.

#include <iostream>
using namespace std;
class Triangle {
private:
    float side1, side2, side3;
public:
    void setSides(float s1, float s2, float s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }
    void determineTriangleType() {
        if (side1 == side2 && side2 == side3) {
            cout << "The triangle is Equilateral." << endl;
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            cout << "The triangle is Isosceles." << endl;
        } else {
            cout << "The triangle is Scalene." << endl;
        }
    }
};
int main() {
    Triangle triangle;
    triangle.setSides(5, 5, 5);
    triangle.determineTriangleType();
    return 0;
}