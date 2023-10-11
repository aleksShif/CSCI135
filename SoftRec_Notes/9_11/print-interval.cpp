/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab2B

This program accepts two numbers, a lower and upper limit and prints out all numbers between the two, excluding the upper. Numbers are separated by a space.
*/
#include <iostream> 
using namespace std; 

int main() {
    int l; 
    int u; 

    cout << "Please enter L: "; 
    cin >> l; 
    cout << "Please enter U: "; 
    cin >> u; 

    for (int i = l; i < u; i++) {
        cout << i << " "; 
    }
    cout << endl;

    return 0;
}
