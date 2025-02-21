//Write a C++ program to find the two repeating elements in a given array of integers.

#include <iostream>
using namespace std;

int main(){
    int array[10]={1,5,3,6,2,4,10,15,1,90};

    for(int i = 0; i < int(sizeof(array)/4); i++){
        for(int j = 0 ; j < int(sizeof(array)/4)-1;j++){
            if(array[i]==array[j] && i != j){
                cout<<"the repeated number in array is : "<<array[i];
                return 0;
            }
        }
    }
    cout<<array[1];
}