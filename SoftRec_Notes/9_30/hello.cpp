/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: E8.1

This program writes "Hello, World!" to a file named hello.txt, then reopens the file, reads into a string and prints out the string.
*/
#include <iostream> 
#include <fstream>
using namespace std;

int main() {
    string res; 

    ofstream file; 
    file.open("hello.txt"); 
    file << "Hello, World!"; 
    file.close(); 

    ifstream infile;
    infile.open("hello.txt");
    if(infile.is_open()){
        while(getline(infile, res)){
            cout << res;  
        } 
    }

    return 0;
}


