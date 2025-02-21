/* Write a C++ program that removes a specific character from a given string. Return
the updated string.
Test Data:
("Filename", "e") -> "Filnam"
("Compilation Time", "i") -> "Complaton Tme"
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string input;
    string output = "";
    char letter;
    cout<<"enter your input string : ";
    cin>>input;
    cout<<"enter your desired letter : ";
    cin>>letter;

    for(int i = 0 ; i < input.length(); i++){
        if(input[i]!=letter){
            output.push_back(input[i]);
        }
    }
    cout<<output<<endl;

    return 0;
}
