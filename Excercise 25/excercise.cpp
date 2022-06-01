#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the mean after removing some elements.
double trimMean(vector<int>& arr) {
        // Sorting vector.
        sort(arr.begin(), arr.end());
        
        // Variables to use.
        double sum = 0;
        double count = 0;
        
        // Run in a loop where we disregard the first 5% and the last 5% of elements.
        for (int i = arr.size() * 0.05; i < arr.size() - (arr.size() * 0.05); i++) {
            // Sum up the array.
            sum += arr[i];
            
            // Increase the count.
            count++;
        }
        
        // Getting the mean and returning it.
        return sum / count;
    }

int main() {
    cout << "Case 1 : ";
    vector<int> arr1 {1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3};
    cout << trimMean(arr1);
    cout << endl;
    // Expected : 2
    // Result   : 2

    cout << "Case 2 : ";
    vector<int> arr2 {6,2,7,5,1,2,0,3,10,2,5,0,5,5,0,8,7,6,8,0};
    cout << trimMean(arr2);
    cout << endl;
    // Expected : 4
    // Result   : 4

    cout << "Case 3 : ";
    vector<int> arr3 {6,0,7,0,7,5,7,8,3,4,0,7,8,1,6,8,1,1,2,4,8,1,9,5,4,3,8,5,10,8,6,6,1,0,6,10,8,2,3,4};
    cout << trimMean(arr3);
    cout << endl;
    // Expected : 4.77778
    // Result   : 4.77778
    return 0;
} 