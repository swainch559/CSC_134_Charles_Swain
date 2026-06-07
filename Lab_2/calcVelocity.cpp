/*
@author: Charles Swain
@date: 2024-06-07
@purpose: This program calculates the velocity based on distance and time.
*/

//include the iostream library for input and output
#include <iostream>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main() {
    //define the distance and time variables
    int distance = 400;
    int time = 4;
    //calculate the velocity using the formula: velocity = distance / time
    int velocity = distance / time;
    //output the velocity to the console
    cout << "The velocity is: " << velocity << " miles per hour." << endl;
    return 0;
}