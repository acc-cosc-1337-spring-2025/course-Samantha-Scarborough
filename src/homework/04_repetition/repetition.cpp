//add include statements
#include <iostream>
using namespace std;

//add function(s) code here
// Function to calculate factorial using a loop
int factorial(int num) {
    int result = 1;
    for (int i = 2; i <= num; i++) {
        result *= i;
    }
    return result;
}

// Function to calculate GCD using with a loop 
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    // Testing the functions
    int num, a, b;

    cout << "Enter a number to find factorial: ";
    cin >> num;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;

    cout << "Enter two numbers to find GCD: ";
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;

    return 0;
}

