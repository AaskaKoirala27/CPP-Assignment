//Write a C++ program to find the second largest element in an array of integers.

#include <iostream>
using namespace std;

int main(){
    int array[10]={1,4,3,6,2,4,10,3,2,90};

    for(int i = 0; i < int(sizeof(array)/4); i++){
        for(int j = 0 ; j < int(sizeof(array)/4)-1;j++){
            int temp = array[j];
            if(array[j]<array[j+1]){
                array[j]= array[j+1];
                array[j+1]= temp;
            }
        }
    }
    cout<<array[1];
}