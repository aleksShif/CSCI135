/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Melissa Lynch
Assignment: Quiz 2 

This program asks user for two integer inputs and prints out the largest of the two.
*/
#include <iostream>
using namespace std;

int main() {
    int first; 
    int second; 
    int largest; 

    cout << "Enter the first number: "; 
    cin >> first; 
    largest = first; 
    cout << "Enter the second number: "; 
    cin >> second; 

    if (second > first) {
        largest = second; 
    }

    cout << "The largest of the two is " << largest << endl; 

    return 0; 
}