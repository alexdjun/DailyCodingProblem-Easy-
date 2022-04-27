#include <iostream>
#include <unordered_map>

using namespace std;

int majorityElement(int arr[], int size) {
    // Solving using unordered_map.
    unordered_map<int, int> m;

    // Iterate through each element and add it to the unordered_map.
    for (int i = 0; i < size; i++) {
        m[arr[i]]++;
    }

    // Variable to store the resut.
    int res;

    // Iterate through unordered_map.
    for (auto x : m) {
        // If the occurence of a value is greater than size / 2, then that is the majority element.
        if (x.second > size/2) {
            res = x.first;
        }
    }

    // Return the resut.
    return res;
}

int main() {
    cout << "Case 1" << endl;
    int arr[] = {3, 2, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << majorityElement(arr, size) << endl;
    // Expected : 3
    // Result   : 3

    cout << "Case 2" << endl;
    int arr2[] = {2,2,1,1,1,2,2};
    size = sizeof(arr2)/sizeof(arr2[0]);
    cout << majorityElement(arr2, size) << endl;
    // Expected : 2
    // Result   : 2

    return 0;
}