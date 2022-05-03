#include <iostream>

using namespace std;

bool easy(string A, string B) {
    // If both strings are same return true.
    if (A == B) return true;

    // If any of the strings are empty return false.
    if (A == "" || B == "") return false;

    // If two string's length is not equal return false.
    if (A.length() != B.length()) return false;

    // Grabing the length of the string.
    int length = A.length();

    // Creating a temporary string and store the copy of A.
    string check = A;

    // Int variable to keep track of how many times I have to iterate over the string. 
    int times = 0;

    // Repeating the steps for string length times.
    while (times != length) {
        for (int i = 0; i < length; i++) {
            // Grab the index as (times + i) % length.
            // This will elminate the case of index going out of bounds.
            check[i] = A[(times + i) % length];
        }

        // If the temporary string is equal to the string B, return true;
        if (check == B)
            return true;

        // Increment the times counter.
        times++;
    } 
    
    // If reached here, it means string A and B are not equal, so return false.
    return false;
};

int main() {
    string A = "abcde";
    string B = "cdeab";
    cout << "Case 1" << endl;
    cout << "String A : " << A << endl;
    cout << "String B : " << B << endl;

    if (easy(A, B))
        cout << "Result : true" << endl;
    else
        cout << "Result : false" << endl;

    cout << endl;

    A = "abc";
    B = "bac";
    cout << "Case 2" << endl;
    cout << "String A : " << A << endl;
    cout << "String B : " << B << endl;
    if (easy(A, B))
        cout << "Result : true" << endl;
    else
        cout << "Result : false" << endl;
}