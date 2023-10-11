/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab4B

This program asks the user to input a width and height and prints out a checkerboard shape of asterisks of those dimensions.
*/
#include <iostream> 
using namespace std;

int main() {
    int width; 
    int height; 
    int j = 0; 
    string current = "* "; 

    cout << "Input width: "; 
    cin >> width; 
    cout << "Input height: "; 
    cin >> height; 

    cout << endl << "Shape:" << endl;

    for (int i = 0; i < height; i++) {
        while (j < width / 2 + width % 2) {
            cout << current;
            j++; 
        }
        if (width % 2 == 0 && current == " *") {
            cout << current; 
        }
        if (current == "* ") {
            current = " *";
            j = 1; 
        }
        else {
            current = "* "; 
            j = 0; 
        }
        cout << endl; 
    }
    return 0; 
}