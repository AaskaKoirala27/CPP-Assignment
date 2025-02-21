//Write a C++ program to implement a recursive function to get the nth Fibonacci number.

#include <iostream>
using namespace std;
int fibonacci(int n) {

    if (n <= 1) return n; //base case
    return fibonacci(n - 1) + fibonacci(n - 2); 
}
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
    return 0;
}
