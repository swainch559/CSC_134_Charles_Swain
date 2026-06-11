/*
@author: Charles Swain
@date: 06/9/2026
@purpose: Print three char variables to the console
*/

//include the iostream library for input and output
#include <iostream>
#include <string>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    //declare three char variables and assign them values
    char letterH = 'H';
    char letterI = 'i';
    char exclamationPoint = '!';
    
    //print the three char variables to the console
    cout << letterH << letterI << exclamationPoint << endl;
    return 0;
}

