/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Project1A

This program reads in numbers from a text file and adds them together. 
*/
#include <iostream> 
using namespace std; 

int main() {
    int sum = 0; 
    int i; 

    while (cin >> i) {
        sum += i;
    }
    cout << sum << endl;

    return 0; 
}