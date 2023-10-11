/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: E5.15

This program includes a function that takes three integers and sorts them using a previously defined function, sort2.
*/
#include <iostream> 
using namespace std;

void sort2(int& a, int& b) {
    if (a > b) {
        int temp = a; 
        a = b; 
        b = temp; 
    }
}

void sort3(int& a, int& b, int& c) {
    sort2(a, b); 
    sort2(a, c); 
    sort2(b, c); 
}
