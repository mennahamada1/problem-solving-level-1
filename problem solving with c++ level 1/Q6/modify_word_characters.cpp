// -----------------------------------------------------
// ✅ Problem 5: Modify Characters in a Word
// -----------------------------------------------------
// Start with a char array forming a word, then change each character to create a new word.

#include <iostream>
using namespace std;

int main() {
    // Original word: menna
    char arr_word[5] = {'m', 'e', 'n', 'n', 'a'};

    // Modify characters to make: annem
    arr_word[0] = 'a';
    arr_word[1] = 'n';
    arr_word[2] = 'n';
    arr_word[3] = 'e';
    arr_word[4] = 'm';

    // Print the new word
    cout << arr_word[0] << arr_word[1] << arr_word[2] << arr_word[3] << arr_word[4];

    return 0;
}
