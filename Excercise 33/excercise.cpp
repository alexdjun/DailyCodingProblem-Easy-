#include <iostream>
#include <vector>

using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    // If n is 0, its always true.
    if (n == 0) return true;
    
    // Size variable.
    int size = flowerbed.size();
    
    // If the array size is 1 : 
    if(size == 1) {
        // If the element is 0, reduce n count.
        if (flowerbed[0] == 0) {
            n--;
        } 
        // Return if n is 0 or not.
        return n == 0;
    }
    
    // Run through loop for arrays size greater than 1.
    for (int i = 0; i < size; i++) {
        // If n becomes 0, break out from loop.
        if (n == 0) break;
        
        // If we are at the first position,
        if (i == 0) {
            // Check if the current positon and position next to it is 0.
            if (flowerbed[i] == 0 && flowerbed[i+1] == 0) {
                // If both of them are 0, reduce n and increment i.
                // (Incrementing i here to skip twice)
                n--;
                i++;
            }
        
        // If we are the last positon,
        } else if (i == size -1) {
            // Check if the current postion and postion next to it is 0.
            if (flowerbed[i] == 0 && flowerbed[i-1] == 0) {
                // If both of them are 0, reduce n.
                n--;
            }
            
        // Else,
        } else {
            // Check if its current postion is 0 and adjacent postions are 0 as well.
            if (flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0) {
                // If all of them are 0, reduce n and increment i.
                n--;
                i++;
            }
        }
    }
    
    // Return if n is 0 or not. 
    return n == 0;
}

int main() {
    vector<int> v1 = {1,0,0,0,1};
    cout << "Case 1 : ";
    if(canPlaceFlowers(v1, 1)) cout << "true" << endl;
    else cout << "false" << endl;
    // Expected : true
    // Result   : true

    vector<int> v2 = {1,0,0,0,1};
    cout << "Case 2 : ";
    if(canPlaceFlowers(v2, 2)) cout << "true" << endl;
    else cout << "false" << endl;
    // Expected : false
    // Result   : false

    vector<int> v3 = {0};
    cout << "Case 3 : ";
    if(canPlaceFlowers(v3, 1)) cout << "true" << endl;
    else cout << "false" << endl;
    // Expected : true
    // Result   : true

    return 0;
} 