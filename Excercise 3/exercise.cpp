#include <iostream>
#include <bitset>   

using namespace std;

uint32_t reverseBit(uint32_t n) {
    // Using bitwise operator ~ to revere the bits.
    return ~n;
}

int main() {
    // Test case for reverseBit() function.
    uint32_t n = 4042322160;
    
    // Showing the binary representation of the number.
    bitset<32> x(n);
    cout << x << endl;

    // Reverse the number and show the binary representation of the number.
    bitset<32> y(reverseBit(n));
    cout << y << endl;

    // Before   : 1111 0000 1111 0000 1111 0000 1111 0000
    // After    : 0000 1111 0000 1111 0000 1111 0000 1111
    
    // Expected : 0000 1111 0000 1111 0000 1111 0000 1111
    
    return 0;
}