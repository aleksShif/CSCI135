/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab7B

This program improves on the previous, unindenting program, by employing two new functions to count the number of open blocks and indent the badly-indented program accordingly. 
*/
#include <iostream>
using namespace std;

int countChar(string line, char c) {
    int counter = 0; 
    for (int i = 0; i < line.length(); i++) {
        if (line[i] == c) {
            counter++;
        }
    }
    return counter; 
}

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

string addLeadingSpaces(string line, int num) {
    line = removeLeadingSpaces(line); 
    if (line[0] == '}') {
        num--; 
    }
    string leading(num, '\t'); 
    return leading + line; 
}

int main() {
    string line; 
    int num = 0;

    getline(cin, line); 
    line = removeLeadingSpaces(line); 
    num += (countChar(line, '{') - countChar(line, '}')); 
    cout << line << endl;

    while (getline(cin, line)) {
        line = addLeadingSpaces(line, num); 
        cout << line << endl; 
        num += (countChar(line, '{') - countChar(line, '}')); 
    }

    return 0;

}