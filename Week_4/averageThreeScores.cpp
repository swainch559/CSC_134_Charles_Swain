/*
@author: Charles Swain
@date: 6/16/2026
@purpose: Enter 3 integer values and calculate the average of the values entered
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
const int HIGH_SCORE = 95; // Constant for high score threshold
int score1, score2, score3; // Variables to hold test scores
double YOUR_RESULT_HERE; // Variable to hold average score

cout << "Enter three test scores: \n"; // Prompt user for input
cin >> score1 >> score2 >> score3; // Read three test scores from user
YOUR_RESULT_HERE = (score1 + score2 + score3) / 3.0; // Calculate average score
cout << fixed << setprecision(2); // Set output to show two decimal places
cout << "The average of your three scores is: " << YOUR_RESULT_HERE << endl;

if (YOUR_RESULT_HERE >= HIGH_SCORE) {// Check if average score is greater than or equal to high score threshold
    cout << "Congratulations! You have a high score!\n" << endl;// Output message if average scoe is a high score
}
else{
    cout << "Keep trying! you can improve your score.\n" << endl;// Output message if average score is not a high score
}

return 0;// Return 0 to indicate successful program termination
}