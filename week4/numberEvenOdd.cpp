/*
@author: Charles Swain
@date: 6/16/2026
@purpose:  Use the modulo operator to determine if the number entered is even or odd
*/

#include <iostream>
using namespace std;

int main(){
    int userNumber; // Variable to hold user inputted value

    cout << "Enter a number: " << endl; // Prompts user for number
    cin >> userNumber; // Captures user number inputted

    if (userNumber % 2 == 0) {// If remainder is not zero, it is odd. Even, if it's 0.
        cout << userNumber << " is an even number." << endl;// Outputs results
    } else {
        cout << userNumber << " is an odd number." << endl;// Outputs results
    }
    
    return 0;
}