// 구조체 초기화하는 방법 1
#include <iostream>

using namespace std;

struct Data1 {
    Data1(int x) : number(x) {}
    int number;
};

struct Data2 {
    Data2() {
        number = 10;
    }
    int number;
} data2;

int main() {

    Data1 data1 {2};

    cout << "Data1 number: " << data1.number << endl;
    cout << "Data2 number: " << data2.number << endl;

    return 0;
}
