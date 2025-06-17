// -----------------------------------------------------
// ✅ Problem: Convert Boolean to String
// -----------------------------------------------------
// This program converts a boolean value to a string "true" or "false"

#include <iostream>
using namespace std;

// Function to convert bool to string
string bool_to_string(bool s) {
    return s ? "true" : "false"; // ternary operator
}

int main() {
    bool s = true; // or false
    cout << bool_to_string(s);
    return 0;
}
