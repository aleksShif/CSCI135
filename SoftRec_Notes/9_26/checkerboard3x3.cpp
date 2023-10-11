/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab4G

This program asks the user to input a width and height, and prints out 3x3 mini-checkerboards of asterisks on an overall checkerboard of those dimensions. 
*/
#include <iostream> 
using namespace std;

int main() {
    int width;
    int height; 
    string current = "***   "; 

    cout << "Input width: "; 
    cin >> width;
    cout << "Input height: "; 
    cin >> height; 

    cout << endl << "Shape:" << endl;

    for (int i = 1; i <= height; i++) {
        for (int j = 0; j < width; j+=6) {
            if (j != width && j > width-6) {
                string temp = current.substr(0,width-j); 
                cout << temp; 
                break;
            }
            cout << current; 
        }
        if (i%3 == 0) {
            if (current == "***   ") {
                current = "   ***"; 
            }
            else current = "***   ";
        }
        cout << endl;
    } 

    return 0;
}