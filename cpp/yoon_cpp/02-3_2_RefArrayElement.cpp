// 참조자의 선언 가능 범위 (배열 요소)
#include <iostream>

using namespace std;

int main() {

    int arr[3] {1, 2, 3};
    int& ref1 = arr[0];
    int& ref2 = arr[1];
    int& ref3 = arr[2];

    cout << ref1 << endl;
    cout << ref2 << endl;
    cout << ref3 << endl;

    return 0;
}

/*

배열의 요소는 변수로 간주되어 참조자의 선언이 가능하다.
포인터 변수도 변수이기 때문에 참조자의 선언이 가능하다.


# 불가능한 참조자의 선언의 예

int& ref = 20;   (X)
상수 대상으로 참조자 선언은 불가능하다.

int& ref;        (X)
참조자는 생성과 동시에 누군가를 차조해야 한다.

int& ref = NULL; (X)
포인터처럼 NULL로 초기화하는 것도 불가능하다.

정리하면, 참조자는 선언과 동시에 누군가를 참조해야 하는데, 그 참조의 대상은
기본적으로 변수가 되어야 한다. 그리고 참조자는 참조의 대상을 변경할 수 없다.

*/
