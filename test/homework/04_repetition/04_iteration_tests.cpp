#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include <iostream>
using namespace std;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


int factorial(int num);

void test_factorial() {
    // Test cases
    int test_values[] = {3, 5, 6};
    int expected_values[] = {6, 120, 720};

    // Loop through test cases
    for (int i = 0; i < 3; i++) {
        int result = factorial(test_values[i]);
        cout << "factorial(" << test_values[i] << ") = " << result;
        if (result == expected_values[i]) {
            cout << " Test Passed \n";
        } else {
            cout << "Test Failed (Expected: " << expected_values[i] << ")\n";
        }
    }
}

int main() {
    test_factorial();
    return 0;
}

// Factorial function implementation
int factorial(int num) {
    int result = 1;
    for (int i = 2; i <= num; i++) {
        result *= i;
    }
    return result;
}

int gcd(int a, int b);

void test_gcd() {
    // Test cases
    int num1[] = {5, 21, 25};
    int num2[] = {15, 28, 100};
    int expected_values[] = {5, 7, 25};

    // Loop through test cases
    for (int i = 0; i < 3; i++) {
        int result = gcd(num1[i], num2[i]);
        cout << "gcd(" << num1[i] << ", " << num2[i] << ") = " << result;
        if (result == expected_values[i]) {
            cout << "Test Passed\n";
        } else {
            cout << "Test Failed (Expected: " << expected_values[i] << ")\n";
        }
    }
}

int main() {
    test_gcd();
    return 0;
}

// GCD function implementation using a loop
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}