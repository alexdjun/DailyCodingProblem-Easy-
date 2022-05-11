#include <iostream>

using namespace std;

// Function to see if the given integer is power of four.
bool isPowerOfFour(int n) {
    // If the number is less than 1, return false.
    if (n < 1) return false;
        
    // If the number is divisible by 4, run in a loop.
    while (n % 4 == 0) {
        // Reduce the number by dividing by 4.
        n /= 4;
    }
    
    // If the number became 1, then we know it is the power of four.
    // Return true.
    if (n == 1) return true;

    // Else, return false.
    else return false;
}

int main() {
    cout << "Case 1 : ";
    if (isPowerOfFour(16)) cout << "True" << endl;
    else cout << "False" << endl;
    // Expected : True
    // Result   : True

    cout << "Case 2 : ";
    if (isPowerOfFour(5)) cout << "True" << endl;
    else cout << "False" << endl;
    // Expected : False
    // Result   : False

    cout << "Case 3 : ";
    if (isPowerOfFour(1)) cout << "True" << endl;
    else cout << "False" << endl;
    // Expected : True
    // Result   : True
    return 0;
} 