
// This code is a simple demonstration of array declaration, initialization, and accessing elements in C++.

#include<iostream>
using namespace std;


int main() {

    //declare
    int number[15];
    //accessing an array
    cout << "Value at 14 index " << number[14] << endl;

  
    //Initialize an array   
    int arr[5] = {1, 2, 3, 4, 5};
    //accessing an array
    cout << "Value at 4 index " << arr[4] << endl;


    //Initialize an array with less elements
     int num[5] = {1, 2};
    //accessing an array
    // cout << "Value at 4 index " << num[4] << endl;
     for(int i = 0; i < 5; i++) {
         cout << "Value at " << i << " index " << num[i] << endl;
     }


    cout << endl << " Everything is Fine " << endl << endl;

    return 0;
}