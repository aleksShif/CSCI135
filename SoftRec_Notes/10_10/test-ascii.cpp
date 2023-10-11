/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab6A

This program asks the user to input a string, then prints out every character, separated by a new line character, with its corresponding ASCII code.
*/
#include <iostream>
using namespace std;

int main() {
    string input; 

    cout << "Input: "; 
    getline(cin, input); 

    for (int i = 0; i < input.length(); i++) {
        cout << input[i] << " " << input[i] + 0 << endl; 
    }

    return 0; 
}