/*
 * Problem:
 * Create a function that takes two floating point numbers as arguments,
 * adds them, and prints the result.
 */

#include <iostream>
using namespace std;

// function definition to take double arguments
void add_numbers(double n1, double n2) {
    double result = n1 + n2;
    cout << result;
}

int main() {
    double number1;
    double number2;
    cin >> number1 >> number2;

    // call the function with arguments
    add_numbers(number1, number2);

    return 0;
}
