/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Melissa Lynch
Assignment: Quiz5

This program prints out a 6 by 5 shape made up of the plus symbol.  
*/
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            cout << '+'; 
        }
        cout << endl; 
    }

    return 0; 
}
