/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: E3.1

This program takes in an integer from the user and returns whether it's positive, negative, or zero. 
*/
#include <iostream> 
using namespace std; 

int main() {
    int num; 

    cout << "Enter a number: "; 
    cin >> num; 

    if (num < 0) {
        cout << "Negative" << endl;
    }
    else if (num > 0) {
        cout << "Positive" << endl;
    }
    else cout << "Zero" << endl;

    return 0;
}