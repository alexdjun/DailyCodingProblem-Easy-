#include <iostream>
#include <vector>

using namespace std;

// Function to see if the number is selfDividingNumbers.
vector<int> selfDividingNumbers(int left, int right) {
        // Variable to stroe the result.
        vector<int> res;

        // Run through loop.
        for (int i = left; i <= right; i++) {
            // Temporary variable to hold the current number.
            int temp = i;

            // Run through loop to check each of the digits.
            while (temp > 0) {
                // Get the remainder.
                int rem  = temp % 10;

                // If the remainder is 0 or remainder modulo original number is not 0 then break.
                if (rem == 0 || i % rem != 0)
                    break;

                // Reduce the number.
                temp /= 10;
            }

            // If the number has beed reduced to 0 then, we know all of its digits are dividing the number.
            if (temp == 0) 
                // Push back answer to the result variable.
                res.push_back(i);
        }

        // Return the result variable.
        return res;
    }

int main() {
    cout << "Case 1 : ";
    vector<int> res1 = selfDividingNumbers(1, 22);
    for (int i = 0; i < res1.size(); i++) {
        cout << res1[i] << " ";
    }
    cout << endl;
    // Expected : 1 2 3 4 5 6 7 8 9 11 12 15 22
    // Result   : 1 2 3 4 5 6 7 8 9 11 12 15 22      

    cout << "Case 2 : ";
    vector<int> res2 = selfDividingNumbers(47, 85);
    for (int i = 0; i < res2.size(); i++) {
        cout << res2[i] << " ";
    }
    cout << endl;
    // Expected : 48 55 66 77
    // Result   : 48 55 66 77 

    return 0;
} 