/* Write a C++ program that swaps two variables without using a third variable.
Sample Output:
Input 1st number : 25
Input 2nd number : 20
After swapping the 1st number is : 20
After swapping the 2nd number is : 25 */

#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Before swapping the first number is: "<<num1<<endl;
    cout<<"Before swapping the second number is: "<<num2<<endl;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout<<"After swapping the first number is: "<<num1<<endl;
    cout<<"After swapping the second number is: "<<num2<<endl;
    return 0;
}
