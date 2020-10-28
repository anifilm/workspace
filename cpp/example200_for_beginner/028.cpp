// 비트 연산자 이해하기 (&, |, ^, ~, <<, >>)
#include <iostream>
#include <bitset>

using namespace std;

int main() {

    bitset<8> bit1;
    bit1.reset();
    bit1 = 127;         // 127: 0111 1111

    bitset<8> bit2;
    bit2.reset();
    bit2 = 32;          //  32: 0010 0000

    bitset<8> bit3 = bit1 & bit2;   //  32: 0010 0000
    bitset<8> bit4 = bit1 | bit2;   // 127: 0111 1111
    bitset<8> bit5 = bit1 ^ bit2;   //  95: 0101 1111
    bitset<8> bit6 = ~bit1;         // 128: 1000 0000
    bitset<8> bit7 = bit2 << 1;     //  32: 0100 0000
    bitset<8> bit8 = bit2 >> 1;     //  16: 0001 0000

    cout << "bit1 & bit2: " << bit3 << ", " << bit3.to_ulong() << endl;
    cout << "bit1 | bit2: " << bit4 << ", " << bit4.to_ulong() << endl;
    cout << "bit1 ^ bit2: " << bit5 << ", " << bit5.to_ulong() << endl;
    cout << "~bit1: " << bit6 << ", " << bit6.to_ulong() << endl;
    cout << "bit2 << 1: " << bit7 << ", " << bit7.to_ulong() << endl;
    cout << "bit2 >> 1: " << bit8 << ", " << bit8.to_ulong() << endl;

    return 0;
}
