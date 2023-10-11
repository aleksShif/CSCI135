/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Project1D

This program acts as a simple calculator, reading in multiple formulas from a file separated by a semi-colon. It accepts any non-negative integer and the +/-/^ operator.  
*/
#include <iostream>
using namespace std;

int main() {
    char in; 
    char pow; 
    int num; 
    int total; 
    cin >> num; 
    if (cin.peek() == '^') {
        cin >> pow; 
        num *= num;  
    } 
    total = num;
    
    while (cin >> in >> num) {  
        if (cin.peek() == '^') {
            cin >> pow; 
            num *= num; 
        }   
        if (in == '+') {
            total += num; 
        }
        else if (in == '-'){
            total -= num; 
        }
        else if (in == ';') {
            cout << total << endl; 
            if (cin.peek() == '^') {
                cin >> pow; 
                num *= num; 
            } 
            total = num; 
        }
    }
    cout << total << endl;
    return 0; 
}

