/*
@author: Charles Swain
@date: 06/10/2026
@purpose: Calculates area of circle
*/

//include the iostream library for input and output
#include <iostream>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

main(){
    //declare variables with given amounts
    float pi = 3.1415;
    int radius = 19;

    //equation to find area of circle
    float areaOfCircle = pi * (radius * radius);

    //print out to console
    cout << "The area of the circle with radius " << radius << " is " << areaOfCircle;
    return 0;

}