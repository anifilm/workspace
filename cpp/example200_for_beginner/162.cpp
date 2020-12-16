// bitset 초기화 방법, 비트 상태 조회하기
#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main() {

    bitset<8> data1 = 100;
    bitset<8> data2 = 0x78;
    bitset<8> data3(string("11110000"));

    cout << "data1: " << data1 << endl;
    cout << "data2: " << data2 << endl;
    cout << "data3: " << data3 << endl;

    data1.set();

    cout << "\n=== data1 ===" << endl;
    cout << "data1 all: " << data1.all() << endl;
    cout << "data1 any: " << data1.any() << endl;
    cout << "data1 none: " << data1.none() << endl;

    data2.reset();

    cout << "\n=== data2 ===" << endl;
    cout << "data2 all: " << data2.all() << endl;
    cout << "data2 any: " << data2.any() << endl;
    cout << "data2 none: " << data2.none() << endl;

    return 0;
}
