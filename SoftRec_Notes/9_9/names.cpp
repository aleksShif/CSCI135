/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: E1.7

This program enters three items in the console, one by one. 
*/
#include <iostream> 
using namespace std; 

int main() {
    string first; 
    string second; 
    string third; 

    cout << "Enter a first name: "; 
    cin >> first; 
    cout << "Enter a second name: ";
    cin >> second;  
    cout << "Enter a third name: ";
    cin >> third; 

    cout << first << endl << second << endl << third << endl; 
    
    return 0; 
}