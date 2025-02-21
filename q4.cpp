/*Write a program in C++ to display the first n terms of the Fibonacci series.
Sample Output:
Input number of terms to display: 10
Here is the Fibonacci series upto to 10 terms:
0 1 1 2 3 5 8 13 21 34 */
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Input number of terms to display: ";
    cin >> n;
    int a = 0, b = 1;
    cout << "Here is the Fibonacci series upto to " << n << " terms:" << endl;
    cout << a << " ";
    for(int i = 1; i < n; i++){
        int temp = a+b;
        cout << temp << " ";
        a=b;
        b = temp;
    }
    cout << endl;
    return 0;
}