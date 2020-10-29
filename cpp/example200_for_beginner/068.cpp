// 정수와 문자의 최대/최소값 알아내기 (min, max)
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    auto result1 = min(1, 5);
    auto result2 = max('a', 'z');
    auto result3 = minmax({'a', 'n', 'z'});
    auto result4 = minmax({1, 2, 3});

    cout << "result1(min): " << result1 << endl;
    cout << "result2(max): " << result2 << endl;
    cout << endl;

    cout << "result3(min): " << result3.first << endl;
    cout << "result3(max): " << result3.second << endl;
    cout << "result4(min): " << result4.first << endl;
    cout << "result4(max): " << result4.second << endl;

    return 0;
}
