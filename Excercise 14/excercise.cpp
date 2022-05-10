#include <iostream>
#include <vector>

using namespace std;

// Function to find out the missing number.
int missingNumber(vector<int> nums) {
    // Result variable to store the result.
    int res = 0;

    // Get the running sum for the size of the vector.
    for (int i = 1; i <= nums.size(); i++) res += i;
    
    // Subtract the each value from the vector from the result variable.
    for (int i = 0; i < nums.size(); i++) res -= nums[i];

    // Result variable now holds the missing value. 
    return res;
}

int main() {
    cout << "Case 1 : ";
    vector<int> v1 = {3, 0, 1};
    cout << missingNumber(v1) << endl;
    // Expected : 2
    // Result   : 2

    cout << "Case 2 : ";
    vector<int> v2 = {0,1 };
    cout << missingNumber(v2) << endl;
    // Expected : 2
    // Result   : 2

    cout << "Case 3 : ";
    vector<int> v3 = {9, 6, 4, 2, 3,5, 7, 0, 1};
    cout << missingNumber(v3) << endl;
    // Expected : 8
    // Result   : 8

    return 0;
} 