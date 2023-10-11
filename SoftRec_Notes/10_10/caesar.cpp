/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab6B

This program incorporates the caesar shift to the user input(provided a plaintext and an rshift). Works under the assumption that rshift is in the range [0,25]. 
*/
#include <iostream>
using namespace std;

char shiftChar(char c, int rshift) {
    char res; 

    if (c >= 65 && c <= 90) {
        res = (c + rshift - 65) % 26 + 65;  
    }

    else if (c >= 97 && c <= 122) {
        res = (c + rshift - 97) % 26 + 97; 
    }

    else return c; 

    return res; 
}

string encryptCaesar(string plaintext, int rshift) {
    string res; 

    for (int i = 0; i < plaintext.length(); i++) {
        char current = plaintext[i]; 
        res += shiftChar(current, rshift); 
    }

    return res; 
}

int main() {
    string s; 
    int rshift; 

    cout << "Enter plaintext: "; 
    getline(cin, s); 

    cout << "Enter shift: "; 
    cin >> rshift; 

    cout << "Ciphertext: " << encryptCaesar(s, rshift) << endl; 

    return 0; 
}