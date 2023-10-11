/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab7A

This program implements a function that removes leading spaces of strings, and writes a main function that uses standard input redirection to read a badly indented c++ file through the function. 
*/
#include <iostream>
using namespace std;

string removeLeadingSpaces(string line) {
    string res; 
    for (int i = 0; i < line.length(); i++) {
        char curr = line[i]; 
        if (!isspace(curr)) {
            res = line.substr(i, string::npos); 
            break; 
        }
    }
    return res; 
}

int main() {
    string line; 
    while (getline(cin, line)) {
        line = removeLeadingSpaces(line); 
        cout << line << endl; 
    }

    return 0; 
}