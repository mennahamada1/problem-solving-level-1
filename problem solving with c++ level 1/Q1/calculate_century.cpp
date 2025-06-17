// ----------------------------------------------------
// 🧮 Problem 2: Calculate the Century from a Given Year
// ----------------------------------------------------
// Given a year as input (e.g., 1705), determine which century it is in.
// Rule: 
// - If the year is divisible by 100, then century = year / 100
// - Otherwise, century = (year / 100) + 1
// Example:
// 1705 → 18th century
// 1900 → 19th century

#include <iostream>
using namespace std;

int main() {
    int year, century;

    cout << "Please enter the year: ";
    cin >> year;

    century = year / 100;

    if (year % 100 == 0)
        cout << "The century is: " << century;
    else
        cout << "The century is: " << century + 1;

    return 0;
}
