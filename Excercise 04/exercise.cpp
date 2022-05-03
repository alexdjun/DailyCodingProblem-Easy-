#include <iostream>

using namespace std;

char firstRecurringChar(string s) {
    // Starting from index 1, compare to the previous character.
    for (int i = 1; i < s.length(); i++) {
        // If they are equal, then we found the first occurrence of the recurring character. So we return that character.
        if (s[i] == s[i - 1]) {
            return s[i];
        }
    }
    return ' ';
}


int main() {
    cout << "Case 1" << endl;
    cout <<  firstRecurringChar("acbbac") << endl; 
    // Expected : b 
    // Printed  : b

    cout << "Case 2" << endl;
    cout <<  firstRecurringChar("abcdef") << endl; 
    // Expected :  
    // Printed  : 


    cout << "Case 3" << endl;
    cout <<  firstRecurringChar("abcddeff") << endl; 
    // Expected : d
    // Printed  : d

    cout << "Case 4" << endl;
    cout <<  firstRecurringChar("") << endl; 
    // Expected : 
    // Printed  : 
    
    return 0;
}