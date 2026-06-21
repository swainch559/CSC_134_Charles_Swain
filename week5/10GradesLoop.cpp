/*
@author: Charles Swain
@date: 6/21/2026
@purpose: Prompts user to ener 10 grades, calculate average, and print to console.
*/

//Library included for output
#include <iostream>

using namespace std;

int main(){

    //Variables intialized and declared
    int gradeCount = 0;
    double currentGrade = 0.0;
    double totalSum = 0.0;
    const int maxGrades = 10;

    //Prompt user for input
    cout << "Enter 10 grades to calculate the average." << endl;

    //Loop until grade count reaches max grades
    while (gradeCount < maxGrades) {
        cout << "Enter grade " << (gradeCount + 1) << ":" << endl;
        cin >> currentGrade;

        //Tracks sum of all grades
        totalSum += currentGrade;

        //Iterates loop count
        gradeCount++;
    }

    //Caluclates average
    double average = totalSum / maxGrades;

    //Outputs results
    cout << "Total Sum of Grades: " << totalSum << endl;
    cout << "Average Grade: " << average << endl;

    return 0;
}