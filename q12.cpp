/*Write a program in C++ to display such a pattern for n number of rows using
numbers. There will be odd numbers in each row. The first and last number of each
row will be 1 and the middle column will be the row number. N numbers of columns
will appear in the 1st row.
Sample Output:
Input number of rows: 7
1234567654321
12345654321
123454321
1234321
12321
121
1
*/

#include <iostream>
using namespace std;

int main(){
    int noOfRows = 7;
    
    for(int i = noOfRows ; i >= 1 ; i--){
        for(int k = noOfRows-i; k >= 1 ; k-- ){
            cout<<"  ";
        }
        for(int j = 1; j <= noOfRows ; j++){
            if(i>=j){
                cout<<j<<" ";
            }
        }
        for(int j = noOfRows; j >= 1 ; j--){
            if(i>j){
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}