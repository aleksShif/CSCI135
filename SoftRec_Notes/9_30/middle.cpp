/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: E5.6

This program includes a function that takes in a string and returns the 1 or 2 middle characters(odd or even lengths).  
*/
#include <iostream> 
using namespace std;

string middle(string str){
    int len = str.length();
    if (len%2==1) {
        return str.substr(len/2, 1);
    } 
    else {
        return str.substr((len/2)-1, 2); 
    }
}