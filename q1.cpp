/*Write a C++ program to reverse a given string.
Example:
Sample Input: helloworld
Sample Output: dlrowolleh */

#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    cout<<"enter a name : ";
    cin>>name;
    for(int i = 0; i< name.length()/2; i++){
        char temp= name[i];
        name[i] = name[name.length()-i-1];
        name[name.length()-i-1] = temp;
    }

    cout<<name<<endl;

    return 0;
}