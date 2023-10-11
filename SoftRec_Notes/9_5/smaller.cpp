/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab1A

This program calculates the smaller of two integers input by the user. 
*/
#include <iostream> 
using namespace ::std; 

int main() {
    int first;
    int second;  

    cout << "Enter the first number: "; 
    cin >> first; 
    cout << "Enter the second number: "; 
    cin >> second; 

    int smaller = first; 
    if (second < smaller) {
        smaller = second; 
    } 
    
    cout << "The smaller of the two is " << smaller << endl;

    return 0;    
}