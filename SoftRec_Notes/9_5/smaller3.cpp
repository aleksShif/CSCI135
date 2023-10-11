/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab1B

This program calculates the smaller of three integers input by the user. 
*/
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

    int smallest = first;   

    if (second < smallest) {
        smallest = second; 
    } 
    if (third < smallest) {
        smallest = third; 
    }
    
    cout << "The smaller of the three is " << smallest << endl;

    return 0;    
}