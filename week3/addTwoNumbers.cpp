/*
@author: Charles Swain
@date: 06/9/2026
@purpose: Add two floating point values together and print the result to the console.
*/

//include the iostream library for input and output
#include <iostream>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main () {
    //declare two variables of type float
    float number1;
    float number2;

    //prompt the user to enter two numbers and store the input in the variables
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;

    //add the two numbers together
    float sum = number1 + number2;

    //print the result to the console
    cout << number1 << " + " << number2 << " is: " << sum << endl;

    return 0;
}