/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: E2.10

This program takes three inputs: gallons of gas in the tank as an integer, miles per gallon as an integer, and the price of gas per gallon as a double. It calculates the cost per 100 miles, and determines how far the car can travel. 
*/

#include <iostream> 
using namespace std; 

int main() {
    int gallons; 
    int mpg;
    double price; 

    cout << "Enter number of gallons of gas in the tank: "; 
    cin >> gallons; 
    cout << "Enter miles per gallon: "; 
    cin >> mpg; 
    cout << "Enter price of gas per gallon: "; 
    cin >> price; 

    double cost = (price / mpg) * 100; 
    cout << "Cost per 100 miles is " << cost << endl; 

    int distance = mpg * gallons; 
    cout << "The car can go " << distance << " miles" << endl; 

    return 0;
}