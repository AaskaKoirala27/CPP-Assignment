/*Write a program in C++ to find the number and sum of all integers between 100 and
200 which are divisible by 9.
Sample Output:
Numbers between 100 and 200, divisible by 9:
108 117 126 135 144 153 162 171 180 189 198
The sum : 1683*/

#include <iostream>
using namespace std;

int main(){
    cout << "Numbers between 100 and 200 that are divisible by 9:" << endl;
    int sum = 0;
    for(int i = 100; i <= 200; i++){
        if(i % 9 == 0){
            cout << i << " ";
            sum = sum+i;
        }
    }
    cout << endl << "The sum is: " << sum << endl;
    return 0;
}