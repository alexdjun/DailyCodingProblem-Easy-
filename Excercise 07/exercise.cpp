#include <iostream>
#include <string>

using namespace std;

// Function to encode the run length string.
string runLengthEncoding(string str) {
    // Count and char varaible to keep in record.
    int count = 1;
    char c = str[0];

    // Result string variable to store the count and the character.
    string res = "";

    // If the string only contains 1 character then just store the count and its character.
    if (str.length() == 1) {
        res += to_string(count);
        res += c;
    }

    // Run through the loop for the length of the string. 
    for (int i = 1; i < str.length(); i++) {
        // If it reached the end and the current character and it is same as the previous character, 
        if (i == str.length() - 1 && str[i] == str[i-1]) {
            // Increment the count and add the count and current character to the result string.
            count++;
            res += to_string(count);
            res += c;
        
        // If it reached the end and the current character is dfferent from the previous character,
        } else if (i == str.length() - 1 && str[i] != str[i-1]){
            // Add the current count and its character to the result string.
            res += to_string(count);
            res += c;

            // Change the count to 1, change the character to keep count and add to result string.
            count = 1;
            c = str[i];
            res += to_string(count);
            res += c;
        
        // If the current character is is same with the previous character, increment the count.
        } else if (str[i] == str[i-1]) {
            count++;

        // If the character is different from the previous character, add the count and current character to the result string.
        } else {
            res += to_string(count);
            res += c;

            // Change the count back to 1 and keep the current character.
            count = 1;
            c  = str[i];
        }
    }

    // Return the result string.
    return res;
}

// Function to decode the run length string.
string runLengthDecoding(string str) {
    // Result string to store the result.
    string res = "";

    // If the length is 0, then reuturn the empty result string.
    if (str.length() == 0) return str;
    
    // Run through loop for the length of string + 2;
    int i = 2;
    while (i < str.length() + 1) {
        // Get the number char from the string.
        int num = str[i - 2] - '0';
        // Get the character char from the string.
        char c = str[i - 1];

        // For the length of num, add character to the result string.
        for (int j = 0; j < num; j++) {
            res += c;
        }

        // Increment the i by 2.
        i+=2;
    }

    // Return the result string.
    return res;
}

int main() {
    cout << "\nCase 1" << endl;
    string str = "AAAABBBCCDAA";
    cout << "Encoding : " << endl;
    cout << runLengthEncoding(str) << endl;
    // Expected : 4A3B2C1D2A
    // Result   : 4A3B2C1D2A
    cout << "Decoding : " << endl;
    cout  << runLengthDecoding(runLengthEncoding(str)) << endl;
    // Expected : AAAABBBCCDAA
    // Result   : AAAABBBCCDAA

    
    cout << "\nCase 2" << endl;
    str = "ABCDEF";
    cout << "Encoding : " << endl;
    cout << runLengthEncoding(str) << endl;
    // Expected : 1A1B1C1D1E1F
    // Result   : 1A1B1C1D1E1F
    cout << "Decoding : " << endl;
    cout  << runLengthDecoding(runLengthEncoding(str)) << endl;
    // Expected : ABCDEF
    // Result   : ABCDEF

    cout << "\nCase 3" << endl;
    str = "A";
    cout << "Encoding : " << endl;
    cout << runLengthEncoding(str) << endl;
    // Expected : 1A
    // Result   : 1A
    cout << "Decoding : " << endl;
    cout  << runLengthDecoding(runLengthEncoding(str)) << endl;
    // Expected : A
    // Result   : A

    cout << "\nCase 4" << endl;
    str = "";
    cout << "Encoding : " << endl;
    cout << runLengthEncoding(str) << endl;
    // Expected : 
    // Result   : 
    cout << "Decoding : " << endl;
    cout  << runLengthDecoding(runLengthEncoding(str)) << endl;
    // Expected : 
    // Result   : 
    return 0;
}