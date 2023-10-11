/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab1C

This program calculates whether the year given by the user is a leap year.  
*/
#include <iostream> 
using namespace std; 

int main() {
    int year; 

    cout << "Enter year: "; 
    cin >> year;
    
    if (year % 4 != 0) {
        cout << "Common year" << endl; 
    } 
    else if (year % 100 != 0) {
        cout << "Leap year" << endl;
    }
    else if (year % 400 != 0) {
        cout << "Common year" << endl;
    }
    else cout << "Leap year" << endl;
    
    return 0;    
}