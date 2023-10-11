/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab3B

This program reads the Current_Reservoir_Levels file, and determines the minimum and maximum East basin storage for the year.
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
    double eastSt; 
    double eastEl; 
    double westSt; 
    double westEl; 
    double min; 
    double max;

    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }       
    getline(fin, junk);

    fin >> date >> eastSt >> eastEl >> westSt >> westEl; 
    min = eastSt; 
    max = eastSt;  

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
        fin.ignore(INT_MAX, '\n');

        if (eastSt <= min) {
            min = eastSt;
        }
        else if (eastSt >= max) {
            max = eastSt; 
        }
}
    fin.close(); 

    cout << "minimum storage in East basin: " << min << " billion gallons" << endl; 
    cout << "maximum storage in East basin: " << max << " billion gallons" << endl;
    return 0; 
}

