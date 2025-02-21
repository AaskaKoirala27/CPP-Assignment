/*Write a C++ program to make such a pattern like a right angle triangle with the
number increased by 1.
Sample Output:
Input number of rows: 4
1
2 3
4 5 6
7 8 9 10
*/

#include <iostream>
using namespace std;

int main(){
    int noOfRows = 4;
    int x = 1;
    for(int i = 1 ; i <= noOfRows ; i++){
        for(int j = 1; j <= i ; j++){
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }
    return 0;
}