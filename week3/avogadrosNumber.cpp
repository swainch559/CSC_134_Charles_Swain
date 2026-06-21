/*
@author: Charles Swain
@date: 06/10/2026
@purpose: Print Avogadro's number using E notation 
*/

//include the iostream library for input and output
#include <iostream>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main () {
    //declare a double to store Avogadro's number
    double avogadrosNumber = 6.02214076e23;

    //print Avogadro's number to the console
    cout << "Avogadro's Number is: " << avogadrosNumber << endl;

    return 0;
}
