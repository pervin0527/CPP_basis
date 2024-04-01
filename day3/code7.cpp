#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    unsigned int a1 = 0b11110111;
    signed int a2 = 0b11110111;
    cout << a1 << " " << a2 << endl;
    
    // Left Shift
    unsigned int a = 3;
    cout << std::bitset<8>(a) << endl;

    unsigned int b1 = a << 1;
    cout << std::bitset<8>(b1) << " " << b1 << endl;

    unsigned int b2 = a << 3;
    cout << std::bitset<8>(b2) << " " << b2 << endl;

    // Right Shift
    unsigned int c = 1024;
    cout << std::bitset<16>(c) << endl;

    cout << std::bitset<16>(c >> 1) << " " << (c >> 1) << endl;
    cout << std::bitset<16>(c >> 2) << " " << (c >> 2) << endl;
    cout << std::bitset<16>(c >> 3) << " " << (c >> 3) << endl;
    cout << std::bitset<16>(c >> 4) << " " << (c >> 4) << endl;


    // NOT
    cout << std::bitset<16>(~c) << " " << (~c) << endl;

    // AND, OR, XOR
    unsigned int d1 = 0b1100;
    unsigned int d2 = 0b0110;

    cout << std::bitset<4>(d1 & d2) << endl;
    cout << std::bitset<4>(d1 | d2) << endl;
    cout << std::bitset<4>(d1 ^ d2) << endl;
    return 0;
}