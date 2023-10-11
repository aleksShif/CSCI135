/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab4D

This program asks the user to input a length, and prints out the lower-left half of a square of those dimensions, in asterisks.
*/
#include <iostream> 
using namespace std;

int main() {
    int length; 

    cout << "Input side length: "; 
    cin >> length; 

    cout << endl << "Shape:" << endl;

    for (int i = 0; i < length; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*"; 
        }
        cout << endl; 
    } 
    return 0; 
}