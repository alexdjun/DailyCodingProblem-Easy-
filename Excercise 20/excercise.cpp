#include <iostream>
#include <algorithm>

using namespace std;

// Function to covert number to hexadecimal.
string toHex(int num) {
        // If the number is 0, return 0.
        if (num == 0)
            return "0";
        
        // This take cares of the negative integers automatically.
        unsigned int num1 = num;
        
        // Result string variable.
        string res = "";
    
        // Base is 16 because we want hexadecimal.
        int base = 16;
        
        // Variable to get the remainder.
        int rem;
        
        while(num1 > 0) {
            // Get the remainder first. 
            rem = num1 % base;
            
            // If it is less than 10, find out the number corresponding to it and add it to result variable.
            if (rem < 10) {
                res += ('0' + (rem));
                
            // Else, find out the alphabet corresponding to it and add it to result variable.
            } else {
                res += ('a' + (rem % 10));
            }

            // Reduce the number. 
            num1 = num1 / base;
        }
        
        // Reverse the result since we were putting it in a reverse order.
        reverse(res.begin(), res.end());
        
        // Return the result variable.
        return res;
    }

int main() {
    cout << "Case 1 : ";
    cout << toHex(26) << endl;
    // Expected : 1a
    // Result   : 1a

    cout << "Case 2 : ";
    cout << toHex(-1) << endl;
    // Expected : ffffffff
    // Result   : ffffffff

    cout << "Case 3 : ";
    cout << toHex(35) << endl;
    // Expected : 23
    // Result   : 23

    return 0;
} 