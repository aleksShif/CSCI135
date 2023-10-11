/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab2C

This program creates an array of length 10, filled with 1s. It employs a do-while loop to print out the array and ask the user for an index and a new value that changes the array if the index is in range. Otherwise, it exits.
*/
#include <iostream> 
using namespace std; 

int main() {
    int myData[10]; 
    int ind; 
    int val; 

    for (int i = 0; i < size(myData); i++) {
        myData[i] = 1;
    }
   
    do {
        for (int j = 0; j < size(myData); j++) {
            cout << myData[j] << " "; 
        }  
        cout << endl;
        cout << "Input index: "; 
        cin >> ind; 
        cout << "Input value: ";
        cin >> val; 

        if (ind >= 0 && ind < 10) {
            myData[ind] = val; 
        }
    }
    while (ind >= 0 && ind < 10); 

    cout << "Index out of range. Exit"; 

    return 0;
}
