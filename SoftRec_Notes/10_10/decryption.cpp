/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab6D

This program implements decryption functions for both Caesar and Vigenere cipher, and demonstrates the encryption/decryption process.
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

string decryptCaesar(string ciphertext, int rshift) {
    string res; 

    for (int i = 0; i < ciphertext.length(); i++) {
        char current = ciphertext[i]; 
        res += shiftChar(current, 26-rshift); 
    }

    return res; 
}

string encryptVigenere(string plaintext, string keyword) {
    string res; 
    int j = 0; 

    for (int i = 0; i < plaintext.length(); i++) {
        char current = plaintext[i]; 

        if (!isupper(current) && !islower(current)) {
            res += current; 
        }

        else {
            if (current >= 65 && current <= 90) {
                res += (current + (keyword[j] - 'a') - 65) % 26 + 65;  
            }

            else if (current >= 97 && current <= 122) {
                res += (current + (keyword[j] - 'a') - 97) % 26 + 97; 
            }
            j++; 
            if (j >= keyword.length()) {
                j = 0; 
            }
        }      
    }
    return res; 
}

string decryptVigenere(string ciphertext, string keyword) {
    string res; 
    int j = 0; 

    for (int i = 0; i < ciphertext.length(); i++) {
        char current = ciphertext[i]; 

        if (!isupper(current) && !islower(current)) {
            res += current; 
        }

        else {
            if (current >= 65 && current <= 90) {
                res += (current + (26 - (keyword[j] - 'a')) - 65) % 26 + 65;  
            }

            else if (current >= 97 && current <= 122) {
                res += (current + (26 - (keyword[j] - 'a')) - 97) % 26 + 97; 
            }
            j++; 
            if (j >= keyword.length()) {
                j = 0; 
            }
        }      
    }

    return res; 
}

int main() {
    string s; 
    string keyword; 
    int rshift; 

    cout << "Enter plaintext: "; 
    getline(cin, s); 

    cout << "\n= Caesar =\n"; 
    cout << "Enter shift: "; 
    cin >> rshift; 
    string cEncrypt = encryptCaesar(s, rshift);
    cout << "Ciphertext: " << cEncrypt << endl; 
    cout << "Decrypted: " << decryptCaesar(cEncrypt, rshift) << endl; 

    cout << "\n= Vigenere =\n"; 
    cout << "Enter keyword: "; 
    cin >> keyword; 
    string vEncrypt = encryptVigenere(s, keyword);
    cout << "Ciphertext: " << vEncrypt << endl; 
    cout << "Decrypted: " << decryptVigenere(vEncrypt, keyword) << endl; 

    return 0;
    
}