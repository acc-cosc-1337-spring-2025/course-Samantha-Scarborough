//write include statements
#include <iostream>
#include <string>

// Function prototypes
std::string get_letter_grade_using_if(int grade);
std::string get_letter_grade_using_switch(int grade);

int main() {
    int choice;
    
    do {
        // Display the menu
        std::cout << "\nMAIN MENU\n";
        std::cout << "1 - Letter grade using if\n";
        std::cout << "2 - Letter grade using switch\n";
        std::cout << "3 - Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1 || choice == 2) {
            int grade;
            std::cout << "Enter a numerical grade (0-100): ";
            std::cin >> grade;

            // Range
            if (grade < 0 || grade > 100) {
                std::cout << "Error: Grade is out of range. Please enter a number between 0 and 100.\n";
            } else {
                if (choice == 1) {
                    std::cout << "Letter grade (if-else): " << get_letter_grade_using_if(grade) << "\n";
                } else {
                    std::cout << "Letter grade (switch): " << get_letter_grade_using_switch(grade) << "\n";
                }
            }
        } else if (choice == 3) {
            std::cout << "Now exiting program...\n";
        } else {
            std::cout << "Invalid choice. Please select 1, 2, or 3.\n";
        }

    } while (choice != 3);

    return 0;
}

// Function using if-else
std::string get_letter_grade_using_if(int grade) {
    if (grade >= 90)
        return "A";
    else if (grade >= 80)
        return "B";
    else if (grade >= 70)
        return "C";
    else if (grade >= 60)
        return "D";
    else
        return "F";
}

// Function using switch case
std::string get_letter_grade_using_switch(int grade) {
    switch (grade / 10) { // Grouping by tens
        case 10:
        case 9: return "A";
        case 8: return "B";
        case 7: return "C";
        case 6: return "D";
        default: return "F";
    }
}