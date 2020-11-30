// bitset 수정하기, 문자열 변환, 숫자 변환
#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main() {

    bitset<8> data1 {1};
    bitset<8> data2 {0x01};

    cout << "data1: " << data1 << endl;
    cout << "data2: " << data2 << endl;

    data1.set(0, false);
    data1.set(2, 1);

    cout << "\n=== data1 ===" << endl;
    cout << "data1: " << data1 << endl;

    data2[4] = false;
    data2.flip(5);

    cout << "\n=== data2 ===" << endl;
    cout << "data2: " << data2 << endl;

    string data1_str = data1.to_string();
    int data2_int = data2.to_ulong();

    cout << "\n=== 변환 ===" << endl;
    cout << "data1_str: " << data1_str << endl;
    cout << "data2_int: " << data2_int << endl;

    return 0;
}
