#include <iostream>
#include <unordered_map>

using namespace std;

// Heler function to check if the character is vowel.
bool isVowel(char x) {
    // Make sure the character is in lower case.
    x = tolower(x);
    
    // Check if the character is vowel.
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
        // Return true if the character is vowel.
        return true;
    }
    
    // Return false if the character is not vowel.
    return false;
}

// Functin to reverse the vowels of a string.
string reverseVowels(string s) {
    // Two pointers.
    // i pointing to the beginning of the string.
    // j pointing to the end of the string.
    int i = 0;
    int j = s.length() - 1;
    
    // Run in a loop while i is less than j.
    while (i < j) {
        // If both pointer are vowels, swap them.
        if (isVowel(s[i]) && isVowel(s[j])) {
            swap(s[i], s[j]);
            // Increment and decrement accordingly.
            i++; j--;

        // If only the i pointer is vowel.
        } else if (isVowel(s[i]) && !isVowel(s[j])) {
            // Move the j pointer to the left.
            j--;

        // If only the j pointer is vowel.
        } else if (!isVowel(s[i]) && isVowel(s[j])) {
            // Move the i pointer to the right.
            i++;

        // If both of the i and j pointers are not vowels.
        } else {
            // Increment and decrement accordingly.
            i++; j--;
        }
    }

    // Return the altered string.
    return s;
}

int main() {
    cout << "Case 1: ";
    string s = "hello";
    cout << reverseVowels(s) << endl;
    // Expected : holle
    // Result   : holle

    cout << "Case 2: ";
    s = "leetcode";
    cout << reverseVowels(s) << endl;
    // Expected : leotcede
    // Result   : leotcede

    cout << "Case 3: ";
    s = "This is a testing string";
    cout << reverseVowels(s) << endl;
    // Expected : This is e tasting string
    // Result   : This is e tasting string

    cout << "Case 4: ";
    s = "East side";
    cout << reverseVowels(s) << endl;
    // Expected : eist sadE
    // Result   : eist sadE

    return 0;
} 