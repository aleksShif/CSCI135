/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab6C

This program incorporates the vigenere shift to the user's input plaintext, using the user's input keyword.  
*/
#include <iostream>
using namespace std;

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

int main() {
    string s; 
    string keyword; 

    cout << "Enter plaintext: "; 
    getline(cin, s); 

    cout << "Enter keyword: "; 
    getline(cin, keyword); 

    cout << "Ciphertext: " << encryptVigenere(s, keyword) << endl; 

    return 0; 
}
