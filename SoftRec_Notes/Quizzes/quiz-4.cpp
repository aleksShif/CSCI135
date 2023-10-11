/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Melissa Lynch
Assignment: Quiz 4

This program reads in every line from a file.
*/
#include <iostream> 
#include <fstream>
using namespace std;

int main() {
    string line; 
    ifstream file; 
    file.open("data.txt"); 

    if (file.is_open()) {
        while (getline(file, line)) {
            cout << line << endl; 
        } 
    }
    file.close(); 


    return 0;
}


