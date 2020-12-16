// 영역의 최소, 최대값 확인하기 (minmax_element)
#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main() {

    array<int, 5> data = {5, 9, 4, 1, 7};

    auto result1 = minmax_element(data.begin(), data.end());

    cout << "최소값: " << *result1.first;
    cout << ", 위치: " << (result1.first - data.begin()) << endl;
    cout << "최대값: " << *result1.second;
    cout << ", 위치: " << (result1.second - data.begin()) << endl;

    auto result2 = minmax_element(data.begin(), data.end(),
        [](int arg1, int arg2) { return arg1 < arg2; }
    );

    cout << "최소값: " << *result2.first;
    cout << ", 위치: " << (result2.first - data.begin()) << endl;
    cout << "최대값: " << *result2.second;
    cout << ", 위치: " << (result2.second - data.begin()) << endl;

    return 0;
}
