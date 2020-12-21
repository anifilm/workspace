// 배열의 동적 할당/반환의 기본 형식
#include <iostream>

using namespace std;

int main() {

    int* p = new int[5];    // 크기가 5인 정수형 배열의 동적 할당
    if (!p) {
        // if (p == NULL) 과 동일, p가 NULL이면
        // 메모리 할당 실패
        cout << "메모리를 할당할 수 없습니다." << endl;
        return 0;
    }

    for (int i = 0; i < 5; i++)
        p[i] = i;   // 배열에 순서대로 0, 1, 2, 3, 4를 저장
    //  p가 배열에 대한 포인터 이므로, 다음과 같이 사용 가능
    //  *(p + i) = i;

    delete[] p;     // 배열 메모리 반환

    return 0;
}

/*

동적 배열의 사이즈 구하기

int* p = new int[5];
int size = _msize(p) / sizeof(*p);

*/
