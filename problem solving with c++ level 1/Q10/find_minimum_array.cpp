// ---------------------------------------------
// ✅ Problem 5: Find the Minimum Value in an Array
// ---------------------------------------------
// Given an array of integers, find and print the smallest number.

#include <iostream>
using namespace std;

int main() {
    int minValue;
    int numbers[5] = {1, 2, 3, 4, 0};  // Example array

    // Initialize minValue with the first element
    minValue = numbers[0];

    // Loop to find the minimum value
    for (int i = 0; i < 5; i++) {
        if (numbers[i] < minValue) {
            minValue = numbers[i];
        }
    }

    // Output the result
    cout << "Minimum value in the array: " << minValue;

    return 0;
}
