 // Problem: If number is even → multiply by 8, if odd → multiply by 9
// Solved by Nouna – Date: 2025-06-14

#include <iostream>
using namespace std;

int main() {
    int e;
    cout << "Please enter the number: ";
    cin >> e;
    
    if (e % 2 == 0) {
        cout << "The number is = " << e * 8;
    } else {
        cout << "The number is = " << e * 9;
    }

    return 0;