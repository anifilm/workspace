// 실수 소수점 버리기 올리기 (floor, ceil)
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    cout << "=== 소수점 버리기 ===" << endl;
    cout << "floor(1.1): " << floor(1.1) << endl;
    cout << "floor(2.3): " << floor(2.3) << endl;
    cout << "floor(-2.3): " << floor(-2.3) << endl;
    cout << "floor(40.5): " << floor(40.5) << endl;
    cout << "floor(55.7): " << floor(55.7) << endl;
    cout << "floor(-55.7): " << floor(-55.7) << endl;
    cout << "floor(100.9): " << floor(100.9) << endl;
    cout << endl;

    cout << "=== 소수점 올리기 ===" << endl;
    cout << "ceil(1.1): " << ceil(1.1) << endl;
    cout << "ceil(2.3): " << ceil(2.3) << endl;
    cout << "ceil(-2.3): " << ceil(-2.3) << endl;
    cout << "ceil(40.5): " << ceil(40.5) << endl;
    cout << "ceil(55.7): " << ceil(55.7) << endl;
    cout << "ceil(-55.7): " << ceil(-55.7) << endl;
    cout << "ceil(100.9): " << ceil(100.9) << endl;

    return 0;
}
