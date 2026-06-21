/*
@author: Charles Swain
@date: 6/16/2026
@purpose: Accepts a year from a user and determines if the year is a leap year
*/

#include <iostream>
using namespace std;

int main(){
    int userInputYear; // Variable to hold user inputted year

    cout << "Enter a year to determine if it is a leap year: " << endl; // Prompt user to enter a year
    cin >> userInputYear; // Captures user inputted year

    /* Rule 1 is: "Must be a multiple of 400"  that means it must have a remainder of 0. Otherwise there would be a remainder, which
                    would make it not a multiple and thus it would not fit the criteria.
       Rule 2 is: "Must be a multiple of 4 BUT not a multiple of 100" meaning the same as the first rule, but this time it's checking for
                    two conditions that must both be true. 

       As long as one of these rules are true, it is a leap year. Otherwise, it is not.
    */
    if ((userInputYear % 400 == 0) || (userInputYear % 4 == 0 && userInputYear % 100 != 0)){
        cout << "The year you entered: " <<  userInputYear << ", is a leap year." << endl; // Outputs if leap year
    }
    else {
        cout << "The year you entered: " <<  userInputYear << ", is not a leap year." << endl;// Outputs if NOT a leap year
    }

    return 0;
}