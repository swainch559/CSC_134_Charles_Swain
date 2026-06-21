/*
@author: Charles Swain
@date: 2026-06-07
@purpose: This program calculates the voltage based on current and resistance.
*/

//include the iostream library for input and output
#include <iostream>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main() {
    //define the current and resistance variables
    int current = 10;
    int resistance = 2;
    //calculate the voltage using the formula: voltage = current * resistance
    int voltage = current * resistance;
    //output the voltage to the console
    cout << "The voltage is: " << voltage << " volts." << endl;
    return 0;
}