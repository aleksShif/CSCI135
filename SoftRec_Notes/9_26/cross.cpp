/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab4C

This program asks the user to input a size and prints out a cross of asterisks of those dimensions. 
*/
#include <iostream> 
using namespace std;

int main() {
    int size; 

    cout << "Input size: "; 
    cin >> size; 

    cout << endl << "Shape:" << endl; 

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j || i + j == size-1) {
                cout << "*"; 
            }
            else cout << " "; 
        }
        cout << endl;
    }
    return 0; 
}
