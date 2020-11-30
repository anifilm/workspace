// 조건에 맞는 요소가 없는지 검사하기 (none_of)
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    vector<int> data {8, 27, 35, 49};

    bool is_small = any_of(data.begin(), data.end(), [](int i) { return i < 100; });
    bool is_zero = any_of(data.begin(), data.end(), [](int i) { return i != 0; });

    if (is_small == true && is_zero)
        cout << "data 자료는 모두 100보다 작고 0이 아닙니다." << endl;

    return 0;
}
