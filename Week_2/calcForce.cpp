/*
@author: Charles Swain
@date: 2026-06-07
@purpose: This program calculates the force based on mass and acceleration.
*/

//include the iostream library for input and output
#include <iostream>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main() {
    //define the mass and acceleration variables
    double mass = 10.0;
    double acceleration = 96.2361;
    //calculate the force using the formula: force = mass * acceleration
    double force = mass * acceleration;
    //output the force to the console
    cout << "The force is: " << force << " newtons." << endl;
    return 0;
}