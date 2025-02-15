//write include statements
#include <iostream>
#include "hwexpressions.h"

//write namespace using statement for cout

int main()
{
	// Declare variables
    double meal_amount, tip_rate, tip_amount, tax_amount, total;
	double meal_cost, tip_percentage;
	
    // Ask the user for input
    cout << "Enter the meal cost: ";
    cin >> meal_cost;  // Read meal cost from the user
	
    
    cout << "Enter the tip percentage: ";
    cin >> tip_percentage;  // Read tip percentage from the user
    
    // Call get_sales_tax_amount function to calculate sales tax
    double sales_tax = get_sales_tax_amount(meal_cost);
    
    // Call get_tip_amount function to calculate the tip
    double tip = get_tip_amount(meal_cost, tip_percentage);
    
    // Calculate the total amount by adding the meal cost, sales tax, and tip
    double total_amount = meal_cost + sales_tax + tip;
    
    // Display the results
    cout << "Meal Cost: $" << meal_cost << endl;
    cout << "Sales Tax: $" << sales_tax << endl;
    cout << "Tip: $" << tip << endl;
    cout << "Total Amount: $" << total_amount << endl;
	

	return 0;
}

double get_tip_amount(double meal_amount, double tip_rate) {
    return meal_amount * tip_rate;
}

cout << "\n----- RECEIPT -----" << endl;
    cout << "Meal Amount:   $" << meal_amount << endl;
    cout << "Sales Tax:    $" << tax_amount << endl;
    cout << "Tip Amount:   $" << tip_amount << endl;
    cout << "Total Amount: $" << total << endl;