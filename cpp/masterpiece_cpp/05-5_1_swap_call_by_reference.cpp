// 참조에 의한 호출, call by reference
#include <iostream>

using namespace std;

void swap(int& a, int& b) { // 참조 매개 변수 a, b
    int tmp;
    // 참조 매개 변수를 일반 변수처럼 사용
    tmp = a;
    a = b;
    b = tmp;
}

int main() {

    int m = 2, n = 9;
    swap(m, n); // 참조에 의한 호출
    cout << m << ' ' << n << endl;

    return 0;
}
