// Author: Aleksandra Shifrina
// Course: CSCI-135
// Instructor: Professor Tong Yi
// Assignment: E4.8

// This program takes a word as an input and prints out each character on a separate line. 

#include <iostream> 
using namespace std; 

int main() {
    string word; 

    cout << "Enter word: ";
    cin >> word; 

    for (int i = 0; i < word.length(); i++) {
        cout << word.at(i) << endl; 
    }

    return 0;
}