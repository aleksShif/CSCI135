/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Project1B

This program acts as a simple calculator, reading in a formula from a file. It accepts any non-negative integer and the +/- operator.  
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
        else total -= num; 
        
    }
    cout << total << endl; 
    return 0; 
}

