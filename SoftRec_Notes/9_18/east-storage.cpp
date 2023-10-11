/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab3A

This program reads the Current_Reservoir_Levels file, asking user for a date and returns the corresponding east basin storage.
*/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
    string junk; 
    string date; 
    string cap; 
    double eastSt; 
    double eastEl; 
    double westSt; 
    double westEl; 

    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }       
    getline(fin, junk);

    cout << "Enter date: "; 
    cin >> cap; 

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    
        fin.ignore(INT_MAX, '\n');

        if (date == cap) {
            cout << "East basin storage: " << eastSt << " billion gallons" << endl;
            break;
        }
}
    fin.close(); 

    return 0; 
}
