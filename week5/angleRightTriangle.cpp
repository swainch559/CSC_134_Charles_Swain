/*
@author: Charles Swain
@date: 6/21/2026
@purpose: Calculates the angle of a right triangle
*/

//Libraries included for output and math functions 
#include <iostream>
#include <cmath>

using namespace std;

int main(){

    //Double constants declared for triangle
    const double length = 3;
    const double height = 4;

    //Pythagorean theorem applied 
    double hypotenuse = sqrt((length * length) + (height * height));

    //Converting to radians using atan2
    double thetaRadians = atan2(height, length);

    //Converting to angle in degrees
    double thetaDegrees = thetaRadians * (180.0 / 3.14159265);

    //Round to 2 decimal places so it matches 53.13 perfectly
    double roundedTheta = round(thetaDegrees * 100.0) / 100.0;

    //Console output to show results
    cout << "Length: " << length << endl;
    cout << "Height: " << height << endl;
    cout << "Hypotenuse: " << hypotenuse << endl;
    cout << "Angle in degrees: " << roundedTheta << " degrees" << endl;

    //Checks if is a 3-4-5 triangle using the rounded value
    if (roundedTheta == 53.13) {
        cout << "This is a 3-4-5 triangle" << endl;
    } else {
        cout << "This is NOT a 3-4-5 triangle" << endl;
    }

    return 0;
}