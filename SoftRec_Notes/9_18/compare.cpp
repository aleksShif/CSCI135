/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab3C

This program reads the Current_Reservoir_Levels file, asks the user for a start and end date, and prints out the higher elevation between East and West for each date in between(or equal if they are). 
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
    string start;
    string end;
    double eastSt; 
    double eastEl; 
    double westSt; 
    double westEl;   
    bool ev = false; 

    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }       
    getline(fin, junk);

    cout << "Enter starting date: "; 
    cin >> start; 
    cout << "Enter ending date: "; 
    cin >> end; 

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
        fin.ignore(INT_MAX, '\n');

        if (date == start || ev) {
            ev = true; 
            if (date == end) {
                ev = false; 
            }
            if (eastEl > westEl) {
                cout << date << " East" << endl; 
            }
            else if (westEl > eastEl) {
                cout << date << " West" << endl; 
            }
            else cout << date << " Equal" << endl; 
        }
}
    fin.close(); 
    
    return 0; 
}

