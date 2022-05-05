#include <iostream>

using namespace std;

// Adding digits until the result only has one digit.
int addDigit(int num) {
    // Variable to hold the result of addition of digits.
    int result = 0;

    // Run in loop until we get the result.
    while (num > 0) {
        // Add the digit to the result variable.
        result += num % 10;

        // Remove the digit that we added.
        num /= 10;

        // If we added all the digits, and the result variable only has one digit :
        if (num == 0 && result < 10) {
            // Return the result variable.
            return result;
        }

        // Else : 
        if (num == 0 && result >= 10) {
            // Set the number to be the result variable.
            num = result;

            // Set result variable back to 0.
            result = 0;
        }
    }
}

int main() {
    int num = 38;
    cout << "Case 1" << endl;
    cout << addDigit(num) << endl;
    // Expected : 2
    // Result   : 2

    num = 0;
    cout << "Case 2" << endl;
    cout << addDigit(num) << endl;
    // Expected : 0
    // Result   : 0

    return 0;
}