/*
 * Problem:
 * Create a program to add numbers until the user enters 0 using a do...while loop.
 */

#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;

    do {
        cin >> number;
        sum = number + sum;
    } while (number != 0);

    cout << sum;

    return 0;
}
