#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int findSpecialInteger(vector<int>& arr) {
    // Array size.
    int n = arr.size();
    
    // Find out the 25%.
    int twentyFive = floor(n * 0.25);

    // Count varaible.
    int count = 0;
    
    // Result variable, set to the first element.
    int res = arr[0];
    
    // Run in loop.
    for (int i = 0; i < n - 1; i++) {
        // If the next number matches, increment the count.
        if (arr[i] == arr[i+1]) {
            count++;
            // If the count is greater than 25% of the array size:
            if (count >= twentyFive) {
                // Return the number.
                return arr[i];
            }
        // If the number is different, set count back to 0.
        } else {
            count = 0;
        }
    }
    
    // Return the result variable (when arr size is 1).
    return res;
}

int main() {
    vector<int> v1 = {1,2,2,6,6,6,6,7,10};
    cout << "Case 1 : ";
    cout << findSpecialInteger(v1) << endl;
    cout << endl;
    // Expected : 6
    // Result   : 6

    vector<int> v2 = {1,1};
    cout << "Case 2 : ";
    cout << findSpecialInteger(v2) << endl;
    cout << endl;
    // Expected : 1
    // Result   : 1

    vector<int> v3 = {3};
    cout << "Case 3 : ";
    cout << findSpecialInteger(v3) << endl;
    cout << endl;
    // Expected : 3
    // Result   : 3

    return 0;
} 