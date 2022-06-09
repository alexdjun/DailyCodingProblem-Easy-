#include <iostream>
#include <vector>

using namespace std;

bool check(vector<int>& nums) {
    // Variable to keep count how many tiems the number decreases.
    int count = 0;
    
    // Variable for array size.
    int n = nums.size();
    
    // Run in a loop.
    for (int i = 0; i < n; i++) {
        // If the number next to it is smaller: 
        if (nums[i] > nums[(i + 1) % n]) {
            // Increase the count.
            count ++;
        }
    }
    
    // Return true only if count is less than 2.
    return count < 2;
} 

int main() {
    vector<int> v1 = {3,4,5,1,2};
    cout << "Case 1 : ";
    if (check(v1)) cout << "true" << endl;
    else cout << "false" << endl;
    cout << endl;
    // Expected : true
    // Result   : true

    vector<int> v2 = {2,1,3,4};
    cout << "Case 2 : ";
    if (check(v2)) cout << "true" << endl;
    else cout << "false" << endl;
    cout << endl;
    // Expected : false
    // Result   : false

    vector<int> v3 = {1,2,3};
    cout << "Case 3 : ";
    if (check(v3)) cout << "true" << endl;
    else cout << "false" << endl;
    cout << endl;
    // Expected : true
    // Result   : true

    return 0;
} 