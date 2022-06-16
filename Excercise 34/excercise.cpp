#include <iostream>
#include <vector>

using namespace std;

int mostWordsFound(vector<string>& sentences) {
    // Result variable.
    int res = 0;
    
    // Run in a loop.
    for (int i = 0; i < sentences.size(); i++) {
        // Temporary variable to count ' '.
        int count = 0;
        
        // Run through the string.
        for (auto x : sentences[i]) {
            // If come across with ' ', increment the count.
            if (x == ' ') count++;
        }
        
        // Set the maximum value to the result varaible.
        res = max(res, count);
    }
    
    // Return the result variable + 1.
    return res + 1;
}

int main() {
    vector<string> v1 = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
    cout << "Case 1 : ";
    cout << mostWordsFound(v1) << endl;
    // Expected : 6
    // Result   : 6

    vector<string> v2 = {"please wait", "continue to fight", "continue to win"};
    cout << "Case 2 : ";
    cout << mostWordsFound(v2) << endl;
    // Expected : 3
    // Result   : 3

    return 0;
} 