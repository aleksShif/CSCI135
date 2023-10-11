// Author: Aleksandra Shifrina
// Course: CSCI-135
// Instructor: Professor Tong Yi
// Assignment: E3.5

// This program accepts three numbers as input and determines if they're in increasing or decreasing order, or neither. 

#include <iostream> 
using namespace std; 

int main() {
    int first; 
    int second; 
    int third; 

    cout << "Enter the first number: ";  
    cin >> first;  
    cout << "Enter the second number: ";
    cin >> second;
    cout << "Enter the third number: ";
    cin >> third; 

    if (first < second && second < third) {
        cout << "Increasing" << endl; 
    }
    else if (first > second && second > third) {
        cout << "Decreasing" << endl;
    }
    else cout << "Neither" << endl; 

    return 0;
}
