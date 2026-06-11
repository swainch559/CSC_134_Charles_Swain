/*
@author: Charles Swain
@date: 06/10/2026
@purpose: Use forumla to find the volume of the sphere
*/

//include the iostream library for input and output
#include <iostream>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    //declare variables with given amounts
    float pi = 3.1415;
    int radius = 7;

    //equation to find volume
    double volumeOfSphere = (4.0 / 3.0) * pi * radius * radius * radius;

    //print to console
    cout << "The volume of a sphere with radius " << radius << " is " << volumeOfSphere;
    return 0;
}