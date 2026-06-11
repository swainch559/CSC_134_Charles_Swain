/*
@author: Charles Swain
@date: 2026-06-07
@purpose: Divide two numbers by zero.
*/

//include the iostream library for input and output
#include <iostream>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main() {
    int num1 = 5;
    int quotient = num1 / 0;
    cout << "The quotient of " << num1 << " and " << 0 << " is: " << quotient << endl;
    return 0;
}