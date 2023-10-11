/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab1D

This program calculates the number of days in the month given by the user, of a year given by the user, taking into account leap years.
*/
#include <iostream> 
using namespace std; 

int main() {
    int year; 
    int month; 
    int days; 

    cout << "Enter year: "; 
    cin >> year; 
    cout << "Enter month: "; 
    cin >> month; 

    if (month == 2) {
        if (year % 4 != 0) {
            days = 28; 
    } 
        else if (year % 100 != 0) {
            days = 29; 
    }
        else if (year % 400 != 0) {
            days = 28; 
        }
        else days = 29;
    }

    else {
        if (month < 8) {
            if (month % 2 == 0) {
                days = 30; 
            }
            else days = 31; 
        }
        else {
            if (month % 2 == 0) {
                days = 31;
            }
            else days = 30;
        }
    }

    cout << days << " days" << endl; 
    
    return 0;    
}