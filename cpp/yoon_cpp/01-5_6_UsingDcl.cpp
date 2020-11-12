// using을 이용한 네임스페이스의 선언 2
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {

    int num {20};

    cout << "Hello, world!" << endl;
    cout << "Hello, " << "world!" << endl;
    cout << num << ' ' << 'A';
    cout << ' ' << 3.14 << endl;

    return 0;
}
