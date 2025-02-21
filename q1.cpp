/* rite a program in C++ to display a pattern like a right angle triangle using an
asterisk.
Sample Output:
Input number of rows: 5
*
**
***
****
***** 
*/

#include <iostream>
using namespace std;

int main(){

    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0; j < i+1 ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
