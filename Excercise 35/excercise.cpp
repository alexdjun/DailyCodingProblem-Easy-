#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minMovesToSeat(vector<int>& seats, vector<int>& students) {
    // Sort arrays.
    sort(seats.begin(), seats.end());
    sort(students.begin(), students.end());
    
    // Result variable.
    int res = 0;
    
    // Loop thorugh arrays.
    for (int i = 0; i < seats.size(); i++) {
        // Add all of the differences of seat and student. 
        res += abs(seats[i] - students[i]);
    }
    
    // Return the result variable.
    return res;
}

int main() {
    vector<int> v1_seat = {3,1,5};
    vector<int> v1_stud = {2,7,4};

    cout << "Case 1 : ";
    cout << minMovesToSeat(v1_seat, v1_stud) << endl;
    // Expected : 4
    // Result   : 4

    vector<int> v2_seat = {4,1,5,9};
    vector<int> v2_stud = {1,3,2,6};

    cout << "Case 2 : ";
    cout << minMovesToSeat(v2_seat, v2_stud) << endl;
    // Expected : 7
    // Result   : 7

    vector<int> v3_seat = {2,2,6,6};
    vector<int> v3_stud = {1,3,2,6};

    cout << "Case 3 : ";
    cout << minMovesToSeat(v3_seat, v3_stud) << endl;
    // Expected : 4
    // Result   : 4

    return 0;
} 