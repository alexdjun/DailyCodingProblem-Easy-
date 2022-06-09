#include <iostream>
#include <algorithm>

using namespace std;

int removePalindromeSub(string s) {
    // Temporary variable.
    string temp = s;
    
    // Reverse temporary variable.
    reverse(temp.begin(), temp.end());
    
    // If string is palindorme already return 1.
    if (s == temp) return 1;
    
    // Else return 2, because the string only consists of 2 type of alphabet. 
    else return 2;
}

int main() {
    cout << "Case 1 : ";
    cout << removePalindromeSub("ababa") << endl;
    cout << endl;
    // Expected : 1
    // Result   : 1

    cout << "Case 2 : ";
    cout << removePalindromeSub("abb") << endl;
    cout << endl;
    // Expected : 2
    // Result   : 2

    cout << "Case 3 : ";
    cout << removePalindromeSub("baabb") << endl;
    cout << endl;
    // Expected : 2
    // Result   : 2
    return 0;
} 