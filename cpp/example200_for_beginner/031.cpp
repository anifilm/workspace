// 자료형의 크기 이해하기 (sizeof)
#include <iostream>

using namespace std;

class Temp {
    int no;
    bool is_on;
};

int main() {

    cout << "sizeof(char)  : " << sizeof(char) << endl;     // 1 byte
    cout << "sizeof(int)   : " << sizeof(int) << endl;      // 4 byte
    cout << "sizeof(double): " << sizeof(double) << endl;   // 8 byte
    cout << "sizeof(class) : " << sizeof(Temp) << endl;     // 8 byte

    return 0;
}
