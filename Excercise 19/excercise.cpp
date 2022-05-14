#include <iostream>
#include <vector>

using namespace std;

// Function to find the duration of the poison.
int findPoisonedDuration(vector<int>& timeSeries, int duration) {
    // Result variable.
    int res = 0;

    // Calculate the duration until the element before the last element.
    for (int i = 0; i < timeSeries.size() - 1; i++) {
        // Getting the minimum number between : 
        // (element in front of the current element - current element) and duration.
        // This will allow the duration to reset, if it were to posion again during the duration.
        res += min(timeSeries[i+1] - timeSeries[i], duration);
    }

    // Add the duration for the result elemet.
    // This is calcuating the last element that we have skipped.
    return res + duration;
}

int main() {
    vector<int> timeSeries = {1,4};
    int duration = 2;
    cout << "Case 1 : " << findPoisonedDuration(timeSeries, duration) << endl;
    // Expected : 4
    // Result   : 4

    vector<int> timeSeries2 = {1,2};
    cout << "Case 2 : " << findPoisonedDuration(timeSeries2, duration) << endl;
    // Expected : 3
    // Result   : 3

    vector<int> timeSeries3 = {1,2,3,4,5};
    duration = 5;
    cout << "Case 3 : " << findPoisonedDuration(timeSeries3, duration) << endl;
    // Expected : 9
    // Result   : 9

    return 0;
} 