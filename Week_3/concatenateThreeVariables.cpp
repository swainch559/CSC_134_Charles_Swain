/*
@author: Charles Swain
@date: 06/9/2026
@purpose: Concatenate three variables together and print the result to the console.
*/

//include the iostream library for input and output
#include <iostream>
#include <string>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main() {
    //declare and initialize three variables of type string
    string verbiage = "Today I am";
    string age = "25";
    string verbiage_end = "years old!";

    //concatenate the three variables together
    string concatenatedString = verbiage + " " + age + " " + verbiage_end;

    //print the concatenated result to the console
    cout << "Concatenated String: " << concatenatedString << endl;

    return 0;
}