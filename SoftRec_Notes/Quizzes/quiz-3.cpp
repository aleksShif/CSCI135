// Author: Aleksandra Shifrina
// Course: CSCI-135
// Instructor: Professor Melissa Lynch
// Assignment: Quiz3

// This program prints the numbers 1-10, each on a new line, from an array. 

#include <iostream> 
using namespace std;

int main() {
    int nums[10]; 

    for (int i = 0; i < size(nums); i+=1) {
        nums[i] = i+1; 
    }

    for (int i = 0; i < size(nums); i+=1) {
        cout << nums[i] << endl; 
    }

    return 0; 
}
