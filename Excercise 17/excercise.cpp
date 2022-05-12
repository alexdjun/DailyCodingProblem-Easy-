#include <iostream>
#include <unordered_map>

using namespace std;

// Fuction to find the first occurrence of unique character.
int firstUniqChar(string s) {
    // Create a unordered_map.
    unordered_map<char, int> map;

    // Put all of the characters in the map.
    for (int i = 0; i < s.length(); i++) {
        map[s[i]]++;
    }
    
    // Run through the loop to check and find the first occurrence of unique character.
    for (int i = 0; i < s.length(); i++) {
        // If the current character only appeared once, then that is our result.
        if (map[s.at(i)] == 1) {
            // Return the current i.
            return i;
        }
    }

    // If we didn't find anything, return -1.
    return -1;
}

    

int main() {
    cout << "Case 1 : ";
    string testString = "leetcode";
    cout << firstUniqChar(testString) << endl;
    // Expected : 0
    // Result   : 0

    cout << "Case 2 : ";
    testString = "dailycodingproblem";
    cout << firstUniqChar(testString) << endl;
    // Expected : 1
    // Result   : 1

    cout << "Case 3 : ";
    testString = "aabb";
    cout << firstUniqChar(testString) << endl;
    // Expected : -1
    // Result   : -1

    return 0;
} 