/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab4E

This program asks the user to input a length and prints out the upper-right half of a square of those dimensions, in asterisks.
*/
#include <iostream> 
using namespace std;

int main() {
    int length; 

    cout << "Input side length: "; 
    cin >> length; 

    cout << endl << "Shape:" << endl;

    for (int i = length; i > 0; i--) {
        for (int j = 0; j < length; j++) {
            if (j < length - i) {
                cout << " ";
            }
            else cout << "*"; 
        }
        cout << endl; 
    } 
    return 0; 
}