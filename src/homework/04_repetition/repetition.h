//add include statements
#include <iostream>
using namespace std;
/*
Write prototype for function(s)
*/

// Function using if-else-if structure
char get_letter_grade_using_if(int grade) {
    if (grade >= 90) {
        return 'A';
    } else if (grade >= 80) {
        return 'B';
    } else if (grade >= 70) {
        return 'C';
    } else if (grade >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

// Function using switch statement
char get_letter_grade_using_switch(int grade) {
    switch (grade / 10) {
        case 10:
        case 9:
            return 'A';  // For grades 90 and above
        case 8:
            return 'B';  // For grades between 80 and 89
        case 7:
            return 'C';  // For grades between 70 and 79
        case 6:
            return 'D';  // For grades between 60 and 69
        default:
            return 'F';  // For grades below 60
    }
}

int main() {
    int grade;

    // Ask user for the grade
    cout << "Enter the numerical grade: ";
    cin >> grade;

    // Check if grade is within a valid range
    if (grade < 0 || grade > 100) {
        cout << "Invalid grade entered. Please enter a grade between 0 and 100./n";
        return 1;  // Exit the program with an error code
    }

    // Convert using if-else-if function
    char letter_grade_if = get_letter_grade_using_if(grade);
    cout << "Using if-else-if: " << "The letter grade is: /n" << letter_grade_if

    // Convert using switch function
    char letter_grade_switch = get_letter_grade_using_switch(grade);
    cout << "Using switch: " << "The letter grade is: /n" << letter_grade_switch;

    return 0;
}
