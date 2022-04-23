#include <iostream>
#include <vector>

using namespace std;

int fib(int n) {
    // If n is less than 2, then return n;
    if (n < 2) return n;

    // Create a vector with n + 1 elements.
    vector<int> v(n+1);

    // Insert the first two elements with 0 and 1.
    v[0] = 0;
    v[1] = 1;

    // Iterate over nth times.
    for (int i = 2; i <= n; i++) {
        // Insert the element as the sum of previous two elements.
        v[i] = v[i - 2] + v[i - 1];
    }

    // Return the last element.
    return v[n];
};

int main() {
    cout << fib(0) << endl; // Expected 0, got 0.
    cout << fib(1) << endl; // Expected 1, got 1.
    cout << fib(2) << endl; // Expected 1, got 1.
    cout << fib(3) << endl; // Expected 2, got 2.
    cout << fib(4) << endl; // Expected 3, got 3.
    cout << fib(5) << endl; // Expected 5, got 5.
    cout << fib(6) << endl; // Expected 8, got 8.
    cout << fib(7) << endl; // Expected 13, got 13.
    cout << fib(8) << endl; // Expected 21, got 21.
}