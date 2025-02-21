#include <iostream>
using namespace std;
int factorial(int n) {
    if (n<=1)
        return 1; 
    return n * factorial(n - 1); 
}

int main() {
    int num;
    cout << "Enter a positive number: ";
    cin >> num;
    
    if (num < 0)
        cout << "Try again, factorial is not defoned for negative number." << endl;
    else
        cout << "Factorial of " << num << " is: " << factorial(num) << endl;

    return 0;
}
