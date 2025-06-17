// ---------------------------------------------
// ✅ Problem 7: Convert Negative Numbers to Positive
// ---------------------------------------------
// Given an array of negative integers, convert them to positive and print them.

#include <iostream>
using namespace std;

int main() {
    // Array of negative numbers
    int arr[4] = {-1, -2, -3, -4};

    // Loop to convert each number to positive
    for (int i = 0; i < 4; i++) {
        arr[i] *= -1;  // Multiply by -1 to make it positive
        cout << arr[i] << endl;
    }

    return 0;
}
