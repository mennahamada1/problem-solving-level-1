// ---------------------------------------------
// ✅ Problem 4: Even or Odd Checker using Function
// ---------------------------------------------
// Create a function that takes a number and returns:
// "even" if the number is even
// "odd" if the number is odd

#include <iostream>
using namespace std;

// Function to check if number is even or odd
string even_odd(int a) {
    if (a % 2 == 0) {
        return "even";
    } else {
        return "odd";
    }
}

int main() {
    int a;
    
    // Input from user
    cout << "Enter a number: ";
    cin >> a;

    // Output result
    cout << "The number is " << even_odd(a) << ".";

    return 0;
}
