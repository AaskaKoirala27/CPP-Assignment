/*Write a C++ program to make such a pattern like a pyramid with an asterisk.
Sample Output:
Input number of rows: 5
*
* *
* * *
* * * *
* * * * *

*/

#include <iostream>
using namespace std;

int main(){
    int noOfRows = 5;
    int x = 1;
    for(int i = 1 ; i <= noOfRows ; i++){
        for(int k = noOfRows-i; k >= 1 ; k-- ){
            cout<<" ";
        }
        for(int j = 1; j <= i ; j++){ 
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}