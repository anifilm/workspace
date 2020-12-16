// 구조체 초기화하는 방법 2
#include <iostream>

using namespace std;

struct Data1 {
    int number;
};

struct Data2 {
    Data1 data1;
    int number;
} data2;

int main() {

    Data1 data1 = {0};
    Data2 data2 = {data1, 10};

    cout << "Data1 number: " << data2.data1.number << endl;
    cout << "Data2 number: " << data2.number << endl;

    return 0;
}
