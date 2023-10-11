/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab2D

This program prints out the first 60 numbers of the Fibonacci sequence. However, when the numbers approach two billion, they start alternating between negative and positive.
*/
#include <iostream> 
using namespace std; 

int main() {
    int fib[60]; 
    int i = 2;

    fib[0] = 0; 
    fib[1] = 1;
    cout << fib[0] << endl << fib[1] << endl;

    while (i < size(fib)) {
        fib[i] = fib[i-1] + fib[i-2];
        cout << fib[i] << endl;
        i++;
    }

    return 0;
}
