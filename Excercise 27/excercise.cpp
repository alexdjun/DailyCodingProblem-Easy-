#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

// Function to find out the max product of three numbers.
    int maximumProduct(vector<int>& nums) {
    // Size of array.
    int n = nums.size();
    
    // Minimum int value (result varaible).
    int res = INT_MIN;
    
    // Sort the array.
    sort(nums.begin(), nums.end());
    
    // Get the product of last 3 numbers and store in result variable.
    res = max(res, nums[n-3] * nums[n-2] * nums[n-1]);
    
    // Finding the max between the result variable and the product of first two value and last value.
    res = max(res, nums[0] * nums[1] * nums[n-1]);
    
    // Return the result variable.
    return res;
}

int main() {
    vector<int> v1 = {1,2,3};
    cout << "Case 1 : ";
    cout << maximumProduct(v1) << endl;
    cout << endl;
    // Expected : 6
    // Result   : 6

    vector<int> v2 = {5,2,3,8,20,-15};
    cout << "Case 2 : ";
    cout << maximumProduct(v2) << endl;
    cout << endl;
    // Expected : 800
    // Result   : 800

    vector<int> v3 = {-31,-15,5,23,17};
    cout << "Case 3 : ";
    cout << maximumProduct(v3) << endl;
    cout << endl;
    // Expected : 10695
    // Result   : 10695
    return 0;
} 