/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab5F

This program adds on a function that determines the largest twin prime number in an inclusive interval. 
*/
#include <iostream> 
using namespace std;

bool isDivisibleBy(int n, int d) {
    if (d != 0 && n % d == 0) {
        return true; 
    }
    return false; 
}

bool isPrime(int n) {
    if (n < 2) {
        return false; 
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0 && i != n && i != 1) {
            return false; 
        }
    }

    return true; 
}

int nextPrime(int n) {
    n += 1;
    while (!isPrime(n)) {
        n += 1; 
    }

    return n; 
}

int countPrimes(int a, int b) {
    int counter = 0; 

    while (a <= b) {
        if (isPrime(a)) {
            counter++; 
        }
        a += 1; 
    }

    return counter; 
}

bool isTwinPrime(int n) {
    if (isPrime(n) && (isPrime(n-2) || isPrime(n+2))) {
        return true; 
    }
    return false; 
}

int nextTwinPrime(int n) {
    n += 1; 
    while(!isTwinPrime(n)) {
        n += 1; 
    }

    return n;
}

int largestTwinPrime(int a, int b) {
    while (b >= a) {
        if (isTwinPrime(b)) {
            return b; 
        }
        b--; 
    }

    return -1; 
}

int main() {
    int num1;
    int num2;   

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    int answer = largestTwinPrime(num1, num2); 

    cout << answer << endl; 
    
    return 0; 
}