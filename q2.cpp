/*Write a C++ program to capitalize the first letter of each word in a given string.
Words must be separated by only one space.
Example:
Sample Input: cpp string exercises
Sample Output: Cpp String Exercises */

#include <iostream>
#include <string>

using namespace std;

int main(){
    int MAX_LENGTH =  100;
    string sentence;
    cout<<"enter a sentence separated by only single spaces : ";
    getline(cin,sentence);

    //capitalize first letter
    sentence[0]=(sentence[0]-('a'-'A'));

    //capitalize the rest according to the spaces
    for(int i = 0; i< sentence.length(); i++){
        if(sentence[i]==' '){
            sentence[i+1]=(sentence[i+1]-('a'-'A'));
        }
    }

    cout<<sentence<<endl;

    return 0;
}