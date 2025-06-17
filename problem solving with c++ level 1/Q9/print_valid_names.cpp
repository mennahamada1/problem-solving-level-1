// ---------------------------------------------
// ✅ Problem 6: Print Valid Names from Array
// ---------------------------------------------
// Given an array of strings, ignore "!" and print the valid names.

#include <iostream>
using namespace std;

int main() {
    // Array of names (some may be invalid like "!")
    string names[4] = {"!", "menna", "hamada", "marwa"};

    // Loop through the array
    for (int i = 0; i < 4; i++) {
        if (names[i] != "!") {
            cout << names[i] << " ";
        } else {
            cout << "Invalid name found! Skipping...\n";
        }
    }

    return 0;
}
