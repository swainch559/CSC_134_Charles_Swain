/*
@author: Charles Swain
@date: 06/10/2026
@purpose: Convert a temperature from Farenheit to Celsius and print the result to the console.
*/

//include the iostream library for input and output
#include <iostream>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main() {
    //declare a variable to store the temperature in Farenheit
    double degreesFarenheit;

    cout << "Enter a temperature in Farenheit: ";

    //read the user input and store it in the variable
    cin >> degreesFarenheit;

    //convert the temperature to Celsius using the formula C = (F - 32) * 5 / 9
    double degreesCelsius = (degreesFarenheit - 32) * 5 / 9;

    cout << degreesFarenheit << " Farenheit is equal to " << degreesCelsius << " Celsius." << endl;

    return 0;
}