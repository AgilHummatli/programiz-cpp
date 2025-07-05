/*
 * Problem:
 * Given three integers n1, n2, and n3,
 * print 1 if n2 is the smallest among them, otherwise print 0.
 */

#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    if (n2 < n1 && n2 < n3)
        cout << 1;
    else
        cout << 0;

    return 0;
}
