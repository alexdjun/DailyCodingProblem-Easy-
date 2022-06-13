#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int countStudents(vector<int>& students, vector<int>& sandwiches) {
    // Queue to store students.
    queue<int> q(deque<int>(students.begin(), students.end()));
    
    // Variables needed.
    int i = 0;
    int res = 0;
    
    // Run until queue is empty.
    while (!q.empty()) {
        // Get the first element in a temp variable.
        int temp = q.front();
        // Pop the first element.
        q.pop();
        
        // If temp is not equal to sandwich:
        if (temp != sandwiches[i]) {
            // Add 1 to res.
            res++;
            // Push back the temp variable at the end of the queue.
            q.push(temp);
        
        // If it is equal:
        } else {
            // Set res variable back to 0.
            res = 0;
            // Increment the index for sandwich.
            i++;
        }
        
        // If res become equal to the size of the queue, no one can eat.
        if (res == q.size()) {
            // Therefore, break out.
            break;
        }
    }
    
    // Return the size of the queue. 
    return q.size();
}

int main() {
    vector<int> a1 = {1,1,0,0};
    vector<int> b1 = {0,1,0,1};
    cout << "Case 1 : ";
    cout << countStudents(a1, b1) << endl;
    cout << endl;
    // Expected : 0
    // Result   : 0

    vector<int> a2 = {1,1,1,0,0,1};
    vector<int> b2 = {1,0,0,0,1,1};
    cout << "Case 2 : ";
    cout << countStudents(a2, b2) << endl;
    cout << endl;
    // Expected : 3
    // Result   : 3

    vector<int> a3 = {1,1};
    vector<int> b3 = {0,1};
    cout << "Case 3 : ";
    cout << countStudents(a3, b3) << endl;
    cout << endl;
    // Expected : 2
    // Result   : 2

    return 0;
} 