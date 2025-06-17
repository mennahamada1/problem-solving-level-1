// -----------------------------------------------------
// ✅ Problem 8: Determine Quarter from Month Number
// -----------------------------------------------------
// Given a month number (1 to 12), print which quarter it belongs to.

#include <iostream>
using namespace std;

int main() {
    int month;
    
    cout << "Please enter a month (1-12): ";
    cin >> month;

    if (month >= 1 && month <= 3) {
        cout << "Quarter 1";
    } else if (month >= 4 && month <= 6) {
        cout << "Quarter 2";
    } else if (month >= 7 && month <= 9) {
        cout << "Quarter 3";
    } else if (month >= 10 && month <= 12) {
        cout << "Quarter 4";
    } else {
        cout << "Invalid month entered!";
    }

    return 0;
}
