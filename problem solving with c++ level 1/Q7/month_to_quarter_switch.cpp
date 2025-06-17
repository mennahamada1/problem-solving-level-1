// -----------------------------------------------------
// ✅ Problem 9: Determine Quarter from Month using switch
// -----------------------------------------------------
// Given a month number (1 to 12), print which quarter it belongs to using switch-case.

#include <iostream>
using namespace std;

int main() {
    int month;

    cout << "Please enter a month (1-12): ";
    cin >> month;

    switch (month) {
        case 1:
        case 2:
        case 3:
            cout << "Quarter 1";
            break;
        case 4:
        case 5:
        case 6:
            cout << "Quarter 2";
            break;
        case 7:
        case 8:
        case 9:
            cout << "Quarter 3";
            break;
        case 10:
        case 11:
        case 12:
            cout << "Quarter 4";
            break;
        default:
            cout << "Invalid month. Try again.";
    }

    return 0;
}
