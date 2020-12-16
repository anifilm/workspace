// 인라인 함수 사용하기 (inline)
#include <iostream>

using namespace std;

inline int Max(int x, int y) {
    return x > y ? x : y;
}

int main() {

    for (int i = 0; i < 5; i++)
        cout << Max(i, i + 10) << endl;

    return 0;
}
