// 네임스페이스 std에 선언된 모든 것에 대해 네임스페이스 지정의 생략을 지정
#include <iostream>

using namespace std;

int main() {

    int num = 20;

    cout << "Hello, world!" << endl;
    cout << "Hello, " << "world!" << endl;
    cout << num << ' ' << 'A';
    cout << ' ' << 3.14 << endl;

    return 0;
}
