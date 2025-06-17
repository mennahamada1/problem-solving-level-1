// -----------------------------------------------------
// ✅ Problem: Reverse a String
// -----------------------------------------------------
// Given a string, reverse its characters using the STL reverse function.

#include <iostream>
#include <algorithm> // for reverse
using namespace std;

int main() {
    string word = "menna"; // Original word

    // Reverse the word using STL function
    reverse(word.begin(), word.end());

    // Print the reversed word
    cout << word;

    return 0;
}
