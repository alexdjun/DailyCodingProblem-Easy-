#include <iostream>

using namespace std;

string largestOddNumber(string num) {
    // String variable to store result.
    string res = "";
    
    // Loop from the right side of the number.
    for (int i = num.size() -1; i >= 0; i--) {
        
        // Get the integer value of the current index.
        int temp = num[i] - '0';
        
        // If that integer is odd.
        if (temp % 2 != 0) {
            
            // Set the result variable up to that number.
            res = num.substr(0, i + 1);
            
            // Break out from the loop.
            break;
        }
    }
    
    // Reutun the result variable.
    return res;
}

int main() {
    cout << "Case 1 : ";
    cout << largestOddNumber("52") << endl;
    cout << endl;
    // Expected : 5
    // Result   : 5

    cout << "Case 2 : ";
    cout << largestOddNumber("4206") << endl;
    cout << endl;
    // Expected : 
    // Result   : 

    cout << "Case 3 : ";
    cout << largestOddNumber("35427") << endl;
    cout << endl;
    // Expected : 35427
    // Result   : 35427

    return 0;
} 