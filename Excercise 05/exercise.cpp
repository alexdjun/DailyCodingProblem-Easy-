#include <iostream>
#include <algorithm>

using namespace std;

// Helper function.
int gcd(int x, int y) {
    // If x becomes 0, it means we y is the gcd, so return y.
    if (x == 0) return y;

    // Recursive function to calculate the gcd.
    return gcd(y % x, x);
}

int findGCD(int arr[], int size) {
    // Sort the array first.
    sort(arr, arr + size);
    
    // First set the initial result value as the first element of the array.
    int res = arr[0];

    // Loop through the array to find the greatest common divisor.
    for (int i = 1; i < size; i++) {
        // Use helper function.
        res = gcd(arr[i], res);
    }

    // Return result value.
    return res;
}


int main() {
    cout << "Case 1" << endl;
    int arr[] = {42, 56, 14};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << findGCD(arr, size) << endl;
    // Expected : 14
    // Result   : 14

    cout << "Case 2" << endl;
    int arr2[] = {5, 8, 9};
    size = sizeof(arr2)/sizeof(arr2[0]);
    cout << findGCD(arr2, size) << endl;
    // Expected : 1
    // Result   : 1

    cout << "Case 3" << endl;
    int arr3[] = {32, 128, 1344};
    size = sizeof(arr3)/sizeof(arr3[0]);
    cout << findGCD(arr3, size) << endl;
    // Expected : 32
    // Result   : 32

    cout << "Case 4" << endl;
    int arr4[] = {0};
    size = sizeof(arr4)/sizeof(arr4[0]);
    cout << findGCD(arr4, size) << endl;
    // Expected : 0
    // Result   : 0

    return 0;
}