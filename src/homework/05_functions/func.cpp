//add include statements
#include <iostream>
#include <string>

using namespace std;

//add function code here
int main() {
    int choice;
    string dna;

    while (true) {
        // Display the menu
        cout << "Menu\n";
        cout << "1- Get GC Content\n";
        cout << "2- Get DNA Complement\n";
        cout << "3- Exit\n";
        cout << "Enter number choice: ";
        cin >> choice;

        if (choice == 3) {
            cout << "Now exiting program...\n";
            break; // Exit the loop and end program
        }

        // Prompt for DNA string
        cout << "Enter a DNA string: ";
        cin >> dna;

        // Validate DNA string (only A, T, C, G)
        bool valid_dna = true;
        for (char ch : dna) {
            if (ch != 'A' && ch != 'T' && ch != 'C' && ch != 'G') {
                valid_dna = false;
                break;
            }
        }

        if (!valid_dna) {
            cout << "Invalid DNA string. Please only enter A, T, C, and G.\n";
            continue;
        }

        // Deal with user's choice
        if (choice == 1) {
            double gc_content = get_gc_content(dna);
            cout << "GC Content: " << gc_content << "%" << endl;
        }
        else if (choice == 2) {
            string complement = get_dna_complement(dna);
            cout << "DNA Complement: " << complement << endl;
        }
        else {
            cout << "Invalid choice. Please choose 1, 2, or 3.\n";
        }
    }

    return 0;
}

// Function to calculate GC content (percentage of G and C in the DNA sequence)
double get_gc_content(const string& dna) {
    int gc_count = 0;
    for (char nucleotide : dna) {
        if (nucleotide == 'G' || nucleotide == 'C') {
            gc_count++;
        }
    }
    return (static_cast<double>(gc_count) / dna.length()) * 100;
}

// Function to reverse the DNA string
string reverse_string(string dna) {
    int left = 0;
    int right = dna.length() - 1;
    
    while (left < right) {
        swap(dna[left], dna[right]);
        left++;
        right--;
    }
    
    return dna;
}

// Function to get the complement of the DNA string
string get_dna_complement(string dna) {
    for (char& nucleotide : dna) {
        if (nucleotide == 'A') {
            nucleotide = 'T';
        } else if (nucleotide == 'T') {
            nucleotide = 'A';
        } else if (nucleotide == 'C') {
            nucleotide = 'G';
        } else if (nucleotide == 'G') {
            nucleotide = 'C';
        }
    }
    return reverse_string(dna); // Reverse the complement to get the correct sequence
}
