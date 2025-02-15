#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "hwexpressions.h"
#include <math>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify sum_numbers function") 
{
	REQUIRE(add_numbers(5, 5) == 10);
	REQUIRE(add_numbers(10, 10) == 20);
}

// Test Case 1: Test Get Sales Tax
TEST_CASE("Test Get Sales Tax") {
    // Verify that calling get_sales_tax_amount with parameter 10 returns .675
    double meal_cost_1 = 10.0;
    double expected_tax_1 = 0.675;
    double calculated_tax_1 = get_sales_tax_amount(meal_cost_1);
    double tolerance = 0.0001;  //range within which two values are considered equal, even if their difference is not exactly zero
    
    
    if (calculated_tax_1 - expected_tax_1 < tolerance && expected_tax_1 - calculated_tax_1 < tolerance) {
        REQUIRE(true);  // Passes the test
    } else {
        REQUIRE(false);  // Fails the test
    }

    // Verify that calling get_sales_tax_amount with parameter 20 returns 1.35
    double meal_cost_2 = 20.0;
    double expected_tax_2 = 1.35;
    double calculated_tax_2 = get_sales_tax_amount(meal_cost_2);
    
    
    if (calculated_tax_2 - expected_tax_2 < tolerance && expected_tax_2 - calculated_tax_2 < tolerance) {
        REQUIRE(true);  // Passes the test
    } else {
        REQUIRE(false);  // Fails the test
    }
}

// Test Case 2: Test Get Tip Amount
TEST_CASE("Test Get Tip Amount") {
    // Verify that calling get_tip_amount with parameters 20 and 15% returns 3
    double meal_cost_3 = 20.0;
    double tip_percentage_1 = 15.0;
    double expected_tip_1 = 3.0;
    double calculated_tip_1 = get_tip_amount(meal_cost_3, tip_percentage_1);
    
    
    if (calculated_tip_1 - expected_tip_1 < tolerance && expected_tip_1 - calculated_tip_1 < tolerance) {
        REQUIRE(true);  // Passes the test
    } else {
        REQUIRE(false);  // Fails the test
    }

    // Verify that calling get_tip_amount with parameters 20 and 20% returns 4
    double meal_cost_4 = 20.0;
    double tip_percentage_2 = 20.0;
    double expected_tip_2 = 4.0;
    double calculated_tip_2 = get_tip_amount(meal_cost_4, tip_percentage_2);
    
    
    if (calculated_tip_2 - expected_tip_2 < tolerance && expected_tip_2 - calculated_tip_2 < tolerance) {
        REQUIRE(true);  // Passes the test
    } else {
        REQUIRE(false);  // Fails the test
    }
}



