/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Melissa Lynch
Assignment: Quiz6

This program implements a function that returns the max of three given integers. 
*/
#include <iostream>
using namespace std;

int max3(int a, int b, int c) {
    int max = a; 
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    return max; 

}

// int main() {

// }