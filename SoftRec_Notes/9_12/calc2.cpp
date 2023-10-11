/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Project1C

This program acts as a simple calculator, reading in multiple formulas from a file separated by a semi-colon. It accepts any non-negative integer and the +/- operator.  
*/
#include <iostream>
using namespace std;

int main() {
    char in; 
    int num; 
    int total; 
    cin >> total; 

    while (cin >> in >> num) {
        if (in == '+') {
            total += num; 
        } 
        else if (in == '-'){
            total -= num; 
        }
        else if (in == ';') {
            cout << total << endl; 
            total = num; 
        }
    }
    cout << total << endl;
    return 0; 
}

