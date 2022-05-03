#include <iostream>
#include <unordered_map>

using namespace std;

// Solving to see if the word can be rearranged into palindrome.
bool permutationPalindrome(string str) {
    // Boolean variable initializedd true.
    bool res = true;

    // Going to use unordered_map to solve this problem.
    unordered_map<char, int> m;

    // Add to map the occurence of the character.
    for (int i = 0; i < str.length(); i++) {
        m[str[i]]++;
    }

    // Boolean variable to see if odd number of characters already appeared.
    bool odd = false;

    // Check if there are more than one occurence of the odd character.
    for (auto x: m) {
        // If the character occured odd number of times, then set the odd variable to true..
        if (x.second %2 != 0) {
            // If the odd variable is already set, then set the result variable to false.
            // Because palindrome word cannot have more than one odd character.
            if (odd == true) {
                res = false;
            }
            odd = true;
        }
    }

    // Reutrn the result variable.
    return res;
}

int main() {
    cout << "Case 1: " <<endl;
    string str = "carrace";
    if (permutationPalindrome(str)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    // Expected : True
    // Result   : True

    cout << "Case 2: " <<endl;
    str = "daily";
    if (permutationPalindrome(str)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    // Expected : False
    // Result   : False


    cout << "Case 3: " <<endl;
    str = "a";
    if (permutationPalindrome(str)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    // Expected : True
    // Result   : True

    cout << "Case 4: " <<endl;
    str = "ac";
    if (permutationPalindrome(str)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    // Expected : False
    // Result   : False
    return 0;
}