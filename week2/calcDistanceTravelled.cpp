/*
@author: Charles Swain
@date: 2026-06-07
@purpose: This program calculates the distance travelled based on speed and time.
*/

//include the iostream library for input and output
#include <iostream>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main() {
    //define the velocity and time variables
    int velocity = 80;
    int time = 2;
    //calculate the distance travelled using the formula: distance = velocity * time
    int distance = velocity * time;
    //output the distance travelled to the console
    cout << "The distance travelled is: " << distance << " miles." << endl;
    return 0;
}