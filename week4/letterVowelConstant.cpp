/*
@author: Charles Swain
@date: 6/16/2026
@purpose:  Accepts a single character and determine if the character is a vowel or consonant
*/

#include <iostream>
using namespace std;

int main(){
    char userChar; // Variable to hold user inputted character

    cout << "Enter a single letter: " << endl; // Prompts user for character
    cin >> userChar; // Captures user character inputted

    while (userChar >= '0' && userChar <= '9') {// While look to prompt user for input until its valid
        cout << "Error: Numeric values are not allowed." << endl;// Error message if number
        cout << "Try again: " << endl; // Prompts user for character
        cin >> userChar; // Captures user character inputted
    }

    //Criteria to check if letter is a vowel, either upper or lower case
    if (userChar == 'a' || userChar == 'e' || userChar == 'i' || userChar == 'o' || userChar == 'u' ||
             userChar == 'A' || userChar == 'E' || userChar == 'I' || userChar == 'O' || userChar == 'U') {
        cout << userChar << " is a vowel." << endl;// Outputs result
    }
    else {
        cout << userChar << " is a consonant." << endl;
    }
    return 0;
}