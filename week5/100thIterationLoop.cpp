/*
@author: Charles Swain
@date: 6/21/2026
@purpose: Uses while loop to iterate 100 times, then stops, and prints console message when it reaches 100. 
*/

//Library included for console output
#include <iostream>

using namespace std;

int main(){

    //Variable to count loops
    int iteration = 0;

    //While loop that exists until 100 loops is reached
    while (iteration < 100){

        //Adds to the loop variable every iteration
        iteration = iteration + 1;

        //Outputs the number of each loop
        cout << "Loop count: " << iteration << endl;
    }

    //Ouputs result
    cout << "The total number of iterations is: " << iteration << endl;

return 0;
}