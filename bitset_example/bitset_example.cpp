#include <iostream>
#include <bitset>

using namespace std;

int main() {
    // Create a bitset with 8 bits
    bitset<8> myBits;

    // Set some bits to 1
    myBits.set(0);
    myBits.set(2);
    myBits.set(4);
    myBits.set(6);

    // Print the contents of the bitset
    cout << "myBits: " << myBits << endl;

    // Test if a bit is set
    if (myBits.test(4)) {
        cout << "Bit 4 is set." << endl;
    }
    else {
        cout << "Bit 4 is not set." << endl;
    }

    // Count the number of set bits
    cout << "Number of set bits: " << myBits.count() << endl;

    // Flip some bits
    myBits.flip(1);
    myBits.flip(5);

    // Print the contents of the modified bitset
    cout << "myBits after flipping bits 1 and 5: " << myBits << endl;

    return 0;
}
