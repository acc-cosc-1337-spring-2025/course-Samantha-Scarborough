//write include statements
#include <iostream>
using namespace std;
//write using statements


int main() {
    int choice;
    int grade;

    while (true) {
        // Display main menu
        cout << "\nMAIN MENU\n";
        cout << "1 - Letter grade using if\n";
        cout << "2 - Letter grade using switch\n";
        cout << "3 - Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Handle user choice
        if (choice == 3) {
            cout << "Now exiting program..." << endl;
            break;  // Exit the loop and end the program
        } else if (choice == 1 || choice == 2) {
            cout << "Enter the numerical grade (0-100): ";
            cin >> grade;

            // Check if the grade is valid
            if (grade < 0 || grade > 100) {
                cout << "Invalid grade entered. Please enter a grade between 0 - 100." << endl;
                continue;  // Skip the rest of the loop and prompt the menu again
            }

            // Call the appropriate function based on user selection
            if (choice == 1) {
                char letter_grade_if = get_letter_grade_using_if(grade);
                cout << "Using if-else-if: The letter grade is: " << letter_grade_if << endl;
            } else if (choice == 2) {
                char letter_grade_switch = get_letter_grade_using_switch(grade);
                cout << "Using switch: The letter grade is: " << letter_grade_switch << endl;
            }
        } else {
            cout << "Invalid choice. Please select a valid option." << endl;
        }
    }

    return 0;
}

