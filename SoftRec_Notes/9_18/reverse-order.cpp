/*
Author: Aleksandra Shifrina
Course: CSCI-135
Instructor: Professor Tong Yi
Assignment: Lab3D

This program reads the Current_Reservoir_Levels file, and returns the West basin elevation for all dates between the interval input by the user, in reverse.
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
    string junk; 
    string date; 
    string start;
    string end;
    string temp; 
    double eastSt; 
    double eastEl; 
    double westSt; 
    double westEl;   
    bool ev;  
    int counter = 0; 
    string dates[365]; 
    double elev[365];

    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }       
    getline(fin, junk);

    cout << "Enter earlier date: "; 
    cin >> start; 
    cout << "Enter later date: "; 
    cin >> end; 

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
        fin.ignore(INT_MAX, '\n');

        if (date == start || ev) {
            ev = true; 
            if (date == end) {
                ev = false; 
            }

            dates[counter] = date + " "; 
            elev[counter] = westEl;
            counter++;

        }
}
    fin.close(); 
    
    for (int i = counter-1; i >= 0; i--) {
        cout << dates[i];
        string temp = to_string(elev[i]); 
        temp = temp.substr(0, temp.find_last_not_of('0') + 1);
        if(temp.find('.') == temp.size()-1) {
            temp = temp.substr(0, temp.size()-1); 
        }
        cout << temp << " ft" << endl; 
    }
    return 0; 
}

