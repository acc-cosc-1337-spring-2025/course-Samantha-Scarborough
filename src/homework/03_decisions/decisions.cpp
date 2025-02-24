//write include statement for decisions header
#include <iostream>
#include <string>

//Write code for function(s) code here
// Function using if else
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
    switch (grade / 10) { // Dividing by 10 to group by tens
        case 10:
        case 9: return "A";
        case 8: return "B";
        case 7: return "C";
        case 6: return "D";
        default: return "F";
    }
}
