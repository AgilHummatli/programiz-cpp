/*
 * Problem:
 * Read an integer from the user.
 * - Print "even" if the number is divisible by 2.
 * - Print "odd" if it is not divisible by 2.
 * 
 * Hint: A number is even if number % 2 == 0.
 */

#include <iostream>
using namespace std;

int main() {
    int number;

    // get integer input from the user
    cin >> number;

    // check if number is even or odd
    if (number % 2 == 0) {
        cout << "even";
    }
    else {
        cout << "odd";
    } 
    
    return 0;
}
