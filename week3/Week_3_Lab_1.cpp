/*
@author: Charles Swain
@date: 2026-06-10
@purpose: Calcukates the average July high temperature in each city if they rise by 2 percent
*/

//include the iostream library for input and output
#include <iostream>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main() {
    //define the original average July high temperatures for New York, Denver, and Phoenix
    double newYorkTemp = 85;
    double denverTemp = 88;
    double phoenixTemp = 106;
    //calculate the new average July high temperatures if they rise by 2 percent
    double newNewYorkTemp = newYorkTemp * 1.02;
    double newDenverTemp = denverTemp * 1.02;
    double newPhoenixTemp = phoenixTemp * 1.02;
    //output the original and new average July high temperatures for each city to the console
    cout << "The original average July high temperature in New York is: " << newYorkTemp << " degrees Fahrenheit." << endl;
    cout << "The new average July high temperature in New York is: " << newNewYorkTemp << " degrees Fahrenheit." << endl;
    cout << "" << endl;
    cout << "The original average July high temperature in Denver is: " << denverTemp << " degrees Fahrenheit." << endl;
    cout << "The new average July high temperature in Denver is: " << newDenverTemp << " degrees Fahrenheit." << endl;
    cout << "" << endl;
    cout << "The original average July high temperature in Phoenix is: " << phoenixTemp << " degrees Fahrenheit." << endl;
    cout << "The new average July high temperature in Phoenix is: " << newPhoenixTemp << " degrees Fahrenheit." << endl;
    return 0;

}