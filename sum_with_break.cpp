/*
 * Problem:
 * Calculate the sum of positive integers entered by the user.
 * Terminate the loop and print the sum when the user enters 0 or a negative integer.
 */

#include <iostream>
using namespace std;

int main() {
    int total = 0;
    int number;

    while (1) {
        cin >> number;

        if (number <= 0) {
            break;
        } else {
            total += number;
        }
    }

    cout << total;

    return 0;
}
