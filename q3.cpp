/* Write a C++ program to find the largest word in a given string.
Example:
Sample Input: C++ is a general-purpose programming language.
Sample Output: programming */

#include <iostream>
#include <string>

using namespace std;

int main(){
    int MAX_LENGTH =  100;
    string sentence;
    cout<<"enter a sentence separated by only single spaces : ";
    getline(cin,sentence);

    string max;
    string current;
    for(int i = 0; i< sentence.length(); i++){
        if(sentence[i]==' '){
            if(max.length()<current.length()){
                max = current;
            }
            current.clear(); 
        }
        else if(i+1 == sentence.length()){
            current.push_back(sentence[i]);
            if(max.length()<current.length()){
                max = current;
            }
            current.clear(); 
        }
        else{
            current.push_back(sentence[i]);
        }
    }

    cout<<max<<endl;

    return 0;
}