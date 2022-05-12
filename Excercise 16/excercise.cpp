#include <iostream>
#include <vector>

using namespace std;

// Function to generate Pascal's Triangle.
vector<vector<int>> generate(int numRows) {
        // Initialize the result vector of vector of int with the size of number of rows.
        vector<vector<int>> res(numRows);
        
        // Generating rows.
        for (int i = 0; i < numRows; i++) {
            // Rows will have the current i + 1 elements. 
            // Also, initialize it's elements to 1. 
            res[i] = vector<int>(i+1,1);
            
            // Filling in the middle elements as the sum of the two elements on top of it. 
            for (int j = 1; j < i; j++) {
                res[i][j] = res[i-1][j-1] + res[i-1][j];
            }
        }
        
        // Return the result vector.
        return res;

    // Positions Visualization
    //        (0,0)
    //     (1,0) (1,1)
    //   (2,0)(2,1)(2,2)
    }

    

int main() {
    cout << "Case 1 : ";
    vector<vector<int>> res = generate(5);
    cout << "[";
    for (int i = 0; i < res.size(); i++) {
        cout << "[";
        for (int j = 0; j < res[i].size(); j++) {
            if (j != res[i].size() -1) {
                cout << res[i][j] << ",";
            } 
            else {
                cout << res[i][j];
            }
        }
        if (i != res.size() -1) {
            cout << "],";
        } else {
            cout << "]";
        }
        
    }
    cout << "]" << endl;

    // Expected : [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
    // Result   : [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

    cout << "Case 2 : ";
    res = generate(1);
    cout << "[";
    for (int i = 0; i < res.size(); i++) {
        cout << "[";
        for (int j = 0; j < res[i].size(); j++) {
            if (j != res[i].size() -1) {
                cout << res[i][j] << ",";
            } 
            else {
                cout << res[i][j];
            }
        }
        if (i != res.size() -1) {
            cout << "],";
        } else {
            cout << "]";
        }
        
    }
    cout << "]" << endl;

    // Expected : [[1]]
    // Result   : [[1]]

    return 0;
} 