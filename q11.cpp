/*Write a C++ program to display the pattern like right angle triangle with right justified
digits.
Sample Output:
Input number of rows: 5
1
21
321
4321
54321
*/
#include <iostream>
using namespace std;

int main(){
    int noOfRows = 5;
    for(int i = 1 ; i <= noOfRows ; i++){
        for(int j = noOfRows; j >= 1 ; j--){
            if(i>=j){
                cout<<j<<" ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}