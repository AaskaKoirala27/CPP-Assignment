/* Write a C++ program that accepts the user's first and last name and prints them in
reverse order with a space between them.
Input First Name: John
Input Last Name: Doe
Name in reverse is: Doe John */

#include <iostream>
using namespace std;
int main(){
    string FirstName, LastName;
    cout<<"Enter the first name: ";
    cin>>FirstName;
    cout<<"Enter the last name: ";
    cin>>LastName;
    cout<<"The name in reverse is: "<<LastName<<" "<<FirstName<<endl;
    return 0;
}