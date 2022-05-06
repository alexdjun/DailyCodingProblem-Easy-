#include <iostream>
#include <vector>

using namespace std;

// Finding the wealthiest account.
int maximumWealth(vector<vector<int>> accounts) {
    // Result variable that stores the wealthiest amount of the account.
    int max = 0;

    // Run in a nested loop.
    for (int i = 0; i < accounts.size(); i++) {
        // Setting the temporary variable to 0.
        int temp = 0;
        for (int j = 0; j < accounts[i].size(); j++) {
            // Add up all the money and save it in the temporary variable.
            temp += accounts[i][j];
        }
        // If the temporary variable is larger than the max variable, store it in the max variable.
        if (temp > max) max = temp;
    }

    // Return the result variable.
    return max;
}

int main() {
    cout << "Case 1 : ";
    vector<vector<int>> account1 = {
        {1,2,3},
        {3,2,1}
    };
    cout << maximumWealth(account1) << endl;
    // Expected : 6
    // Result   : 6

    cout << "Case 2 : ";
    vector<vector<int>> account2 = {
        {1,5},
        {7,3},
        {3,5}
    };
    cout << maximumWealth(account2) << endl;
    // Expected : 10
    // Result   : 10

    cout << "Case 3 : ";
    vector<vector<int>> account3 = {
        {2,8,7},
        {7,1,3},
        {1,9,5}
    };
    cout << maximumWealth(account3) << endl;
    // Expected : 17
    // Result   : 17

    return 0;
} 