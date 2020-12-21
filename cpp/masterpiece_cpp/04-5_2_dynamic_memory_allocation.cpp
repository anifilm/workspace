// 정수형 공간의 동적 할당 및 반환
#include <iostream>

using namespace std;

int main() {

    int* p;
    p = new int;    // 힙으로부터 int 타입의 정수 공간을 1 할당받음
    if (!p) {
        // if (p == NULL) 과 동일, p가 NULL이면
        // 메모리 할당 실패
        cout << "메모리를 할당할 수 없습니다." << endl;
        return 0;
    }

    *p = 5; // 할당 받은 정수 공간에 5를 저장

    int n = *p;
    cout << "*p = " << *p << endl;
    cout << " n = " << n << endl;

    delete p;   // 할당받은 정수 공간 반환

    return 0;
}
