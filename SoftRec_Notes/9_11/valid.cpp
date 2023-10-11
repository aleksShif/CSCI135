/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab2A

This program accepts a number, only accepting one between 0 and 100. If this criteria is met, the program returns the number squared, otherwise it keeps asking.
*/
#include <iostream> 
#include <cmath>
using namespace std; 

int main() {
    int number; 

    do {
        cout << "Write a number between 0 and 100: ";
        cin >> number; 
    }
    while (number <= 0 || number >= 100);

    cout << pow(number,2) << endl;

    return 0;
}