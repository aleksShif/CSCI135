/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab4A

This program asks the user for a width and height and prints out a rectangle of asterisks of those dimensions. 
*/
#include <iostream> 
using namespace std;

int main() {
    int width; 
    int height; 

    cout << "Input width: "; 
    cin >> width; 
    cout << "Input height: "; 
    cin >> height; 

    cout << endl << "Shape:" << endl; 

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "*"; 
        }
        cout << endl;
    }
    return 0; 
}