/*
@author: Charles Swain
@date: 6/16/2026
@purpose: Enter 3 integer values and calculate the average of the values entered and assign a grade
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
const int HIGH_SCORE = 95; // Constant for high score threshold
int score1, score2, score3; // Variables to hold test scores
double YOUR_RESULT_HERE; // Variable to hold average score
string GRADE_LETTER; //Variable to hold grade letter

cout << "Enter three test scores: \n"; // Prompt user for input
cin >> score1 >> score2 >> score3; // Read three test scores from user

YOUR_RESULT_HERE = (score1 + score2 + score3) / 3.0; // Calculate average score
cout << fixed << setprecision(2); // Set output to show two decimal places
cout << "The average of your three scores is: " << YOUR_RESULT_HERE << endl; // Outputs the average of the numbers

if (YOUR_RESULT_HERE >= 90){//Determines what grade to give based on number breakpoints
    GRADE_LETTER = "A";
}
else if (YOUR_RESULT_HERE >= 80){
    GRADE_LETTER = "B";
}
else if (YOUR_RESULT_HERE >= 70){
    GRADE_LETTER = "C";
}
else if (YOUR_RESULT_HERE >= 60){
    GRADE_LETTER = "D";
}
else
    GRADE_LETTER = "F";
cout << "Your grade letter is: " << GRADE_LETTER << endl;// Output the grade letter result

if (YOUR_RESULT_HERE >= HIGH_SCORE) {// Check if average score is greater than or equal to high score threshold
    cout << "Congratulations! You have a high score!\n" << endl;// Output message if average scoe is a high score
}
else{
    cout << "Keep trying! you can improve your score.\n" << endl;// Output message if average score is not a high score
}

return 0;// Return 0 to indicate successful program termination
}