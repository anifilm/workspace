// 조건에 맞는 요소가 있는지 검사하기 (any_of)
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool EvenOdd(int arg) {
    return arg % 2 == 0 ? true : false;
}

int main() {

    vector<int> data = {8, 27, 35, 49};

    if (any_of(data.begin(), data.end(), EvenOdd))
        cout << "data: 짝수가 존재합니다." << endl;

    if (any_of(data.begin(), data.end(), [](int i) { return i < 10; }))
        cout << "data: 10보다 작은 수가 있습니다." << endl;

    return 0;
}
