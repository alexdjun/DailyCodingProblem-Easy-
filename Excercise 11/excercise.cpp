#include <iostream>
#include <vector>

using namespace std;

// Merging two sorted vectors together in a sorted order.
vector<int> mergeTwoVectors(vector<int> v1, vector<int> v2) {
    // Result vector.
    vector<int> res;

    // Two counters for each vector.
    int i = 0;
    int j = 0;

    // Running the loop until one of the vectors is traversed.
    while(i < v1.size() && j < v2.size()) {
        // If the vector 1's element is smaller or equal to the vector 2's element,
        if (v1[i] <= v2[j]) {
            // Push back the element to the result vector.
            res.push_back(v1[i]);
            // Increment the counter for the first vector.
            i++;

        // If the vector 2's element is smaller or equal to the vector 1's element,
        } else {
            // Push back the element to the result vector.
            res.push_back(v2[j]);
            //Increment the counter for the second vector.
            j++;
        }
    }

    // If the vector 1 is not empty,
    if (i < v1.size()) {
        // Put all the elements of first vector in the result vector.
        while(i < v1.size()) {
            res.push_back(v1[i]);
            i++;
        }

    // Else put all the elements of second vector in the result vector.
    } else {
        while (j < v2.size()) {
            res.push_back(v2[j]);
            j++;
        }
        
    }

    // Return the result vector.
    return res;
}

int main() {
    vector<int> v1 = {1,7,8};
    vector<int> v2 = {2,5,9};
    vector<int> v3 = mergeTwoVectors(v1, v2);

    for (int i = 0; i < v3.size(); i++) {
        cout << v3[i] << " ";
    }
    // Expected : 1 2 5 7 8 9
    // Result   : 1 2 5 7 8 9

    return 0;
}