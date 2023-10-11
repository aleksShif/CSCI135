/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Quiz 1 

This program prompts the user for a number and prints out "I love C++" that number of times, each on a new line.
*/
#include <iostream> 
using namespace std; 

int main() {
    int number; 

    cout << "Enter number: "; 
    cin >> number; 

    for (int i = 0; i < number; i++) {
        cout << "I love C++" << endl; 
    }

    return 0; 
}