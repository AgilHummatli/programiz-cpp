/*
 * Problem:
 * Read an integer from the user.
 * - Print "positive" if the number is greater than 0.
 * - Print "negative" if the number is less than 0.
 * - Print "zero" if the number is equal to 0.
 */

#include <iostream>
using namespace std;

int main() {
    int number;

    // get integer input from the user
    cin >> number;

    // check if number is positive, negative or zero
    if (number > 0) {
        cout << "positive";
    }
    else if (number < 0) {
        cout << "negative";
    }
    else {
        cout << "zero";
    }

    return 0;
}
