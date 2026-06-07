/*
@author: Charles Swain
@date: 2024-06-07
@purpose: Take the square root of a real number and print the result.
*/

//include the required directives/libaries for this program
#include <iostream>
#include <cmath>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main() {
    //declare the variables to hold the user input and the result of the square root calculation
    double num, result;

    //prompt the user to enter a real number and read the input, then calculate the square root and print the result
    cout << "Enter a real number: ";
    cin >> num;

    //calculate the square root of the input number and print the result
    result = sqrt(num);
    
    //print the result to the console
    cout << "The square root of " << num << " is: " << result << endl;

    return 0;
}