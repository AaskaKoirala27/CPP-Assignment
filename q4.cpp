/*Write a C++ program to check if a given string is a Palindrome or not.
A palindrome is a word, number, phrase, or other sequence of characters which
reads the same backward as forward, such as madam, racecar.
Example:
Sample Input: madam
Sample Output: True */

#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    cout<<"enter a name : ";
    cin>>name;
    string rev = name;
    for(int i = 0; i< name.length()/2; i++){
        char temp= rev[i];
        rev[i] = rev[name.length()-i-1];
        rev[name.length()-i-1] = temp;
    }

    if(name == rev){
        cout<<"is palindrome";
    }else{
        cout<<"not palindrome";
    }

    return 0;
}
