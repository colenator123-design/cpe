#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int i;

    while (cin >> i && i != 0) {
        int parity = bitset<32>(i).count() % 2;  // Count '1's in binary representation and calculate parity
        string binaryRepresentation = bitset<32>(i).to_string();  // Assuming 32-bit integers
        cout << "The parity of " << binaryRepresentation << " is " << parity << " (mod 2)." << endl;
    }

    return 0;
}
