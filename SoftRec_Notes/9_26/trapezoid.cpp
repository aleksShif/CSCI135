/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab4F

This program asks the user to input a width and a height, and creates a trapezoid of asterisks of those dimensions. It doesn't accept heights that are impossibly large for the given width.
*/
#include <iostream> 
using namespace std;

int main() {
    int width;
    int height; 
    int spaces = 0; 
    int ast;

    cout << "Input width: "; 
    cin >> width;
    ast = width;
    cout << "Input height: "; 
    cin >> height;  

    if (height > width / 2 + width % 2) {
        cout << "Impossible shape!" << endl;
        return 0;
    }
    cout << endl << "Shape:" << endl;

    for (int i = 0; i < height; i++) {
        string sp(spaces, ' ');
        string st(ast, '*');   
        cout << sp;
        cout << st; 
        cout << sp << endl;

        spaces++; 
        ast-=2;
    }

    return 0; 
}