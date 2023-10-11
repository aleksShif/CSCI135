/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: E5.14

This program includes a function that takes in two integers, a and b, and switches them if a is greater than b.
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
