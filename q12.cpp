/*Write a C++ program to compute the square root of a given non-negative integer.
Return type should be an integer.
Sample Input: n = 81
Sample Output: Square root of 81 = 9
Input: n = 8
Output: Square root of 8 = 2*/ 

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 0;
    while(i * i <= n){
        i++;
    }
    cout << "Square root of " << n << " = " << i - 1 << endl;
    return 0;
}