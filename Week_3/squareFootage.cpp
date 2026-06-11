/*
@author: Charles Swain
@date: 06/10/2026
@purpose: Use forumla to find square footage of a home
*/

//include the iostream library for input and output
#include <iostream>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    //declare variables with given amounts 
    int width = 32;
    int length = 50;

    //equation to find square footage
    int squareFootageOfHome = length * width;

    //print out to console
    cout << "The square footage of the new home with length " << length << " feet and width " << width << " feet is " << squareFootageOfHome << " feet.";
    return 0;
}