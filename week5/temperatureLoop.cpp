/*
@author: Charles Swain
@date: 6/21/2026
@purpose: Prompts user to enter temperature until they enter 212.34 exactly
*/

//Library for inputs
#include <iostream>

using namespace std;

int main(){

    //Declare variable for user input
    double userTemperature;

    //While loop if temperature is not 212.34 exactly
    while (userTemperature != 212.34)
    {
        cout << "Please enter a temperature (212.34 to stop):" << endl;
        cin >> userTemperature;
    }

    //Console output that only shows once while loop ends
    cout << "The temperature has been succesfully set, thank you. " << endl;

return 0;
}