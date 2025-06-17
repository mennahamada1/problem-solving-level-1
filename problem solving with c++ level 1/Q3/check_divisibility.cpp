// ---------------------------------------------
// ✅ Problem 3: Check if a Number is Divisible by x and y
// ---------------------------------------------
// Given three integers: n, x, y
// Check if n is divisible by both x and y
// Example:
// n = 12, x = 3, y = 4 → true
// n = 10, x = 2, y = 3 → false

#include <iostream>
using namespace std;

int main() {
    int n, x, y;

    // Input the numbers
    cout << "Enter values for n, x, and y: ";
    cin >> n >> x >> y;

    // Check if divisible by both x and y
    if (n % x == 0 && n % y == 0) {
        cout << "True: n is divisible by both x and y ";
    } else {
        cout << "False: Try again ";
    }

    return 0;
}
