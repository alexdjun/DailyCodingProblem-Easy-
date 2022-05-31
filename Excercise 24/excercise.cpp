#include <iostream>
#include <vector>

using namespace std;

// Function to find the position of the occurence of word that contains searchWord.
int isPrefixOfWord(string sentence, string searchWord) {
    // Result variable.
    int res;
    
    // Vector to store words.
    vector<string> words;
    
    // String to store word.
    string word = "";
    
    // Run through loop to store words.
    for (int i = 0; i < sentence.length(); i++) {    
        // If see a space, put the word in a vector and set the word variable back to empty.
        if(sentence[i] == ' ') {
            words.push_back(word);
            word = "";
            
        // If reached end of sentence, append the last character and add the word to the vector.
        } else if (i == sentence.length() -1) {
            word += sentence[i];
            words.push_back(word);
            
        // Append character to the word until it sees the space or reach the end.
        } else {
            word += sentence[i];
        }
    }
    
    // Variable to use.
    int j = 0;
    
    // Run through loop to check each word.
    for (int i = 0; i < words.size(); i++) {
        // If the word in a vector's length is greater or equal to the length of searchWord, do check.
        if(words[i].length() >= searchWord.length()) {
            // If j becomes the length of the searchWord, we found the word.
            if (j == searchWord.length()) {
                // Return the i + 1 value.
                return i + 1;
            }
            
            // If the character doesn't match between two words, break and set j back to 0.
            if(words[i].at(j) != searchWord.at(j)) {
                j = 0;
                
            // If the character matches, i-- to look at the same word.
            // J++ to check the next character.
            } else {
                i--;
                j++;
            }
        }
    }
    
    // If reached here, that means we didn't find the word. Return -1.
    return -1;
}

int main() {
    cout << "Case 1 : ";
    cout << isPrefixOfWord("i love eating burger", "burg");
    cout << endl;
    // Expected : 4
    // Result   : 4

    cout << "Case 2 : ";
    cout << isPrefixOfWord("this problem is an easy problem", "pro");
    cout << endl;
    // Expected : 2
    // Result   : 2

    cout << "Case 3 : ";
    cout << isPrefixOfWord("i am tired", "you");
    cout << endl;
    // Expected : -1
    // Result   : -1
    return 0;
} 