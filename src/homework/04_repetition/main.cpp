//write include statements
#include <iostream>
#include "repetition.h"

using namespace std;
//write using statements

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

