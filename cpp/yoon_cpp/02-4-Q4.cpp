/* 문제 02-2 [const 포인터와 const 참조자]
const 포인터에 대한 복습을 겸할 수 있는 문제를 제시하겠다. 다음 상수 선언을 보자.
const int num = 12;

포인터 변수를 선언해서 위 변수를 가리키게 해보자. 그리고 이 포인터 변수를 참조하는
참조자를 하나 선언하자. 마지막으로 이렇게 선언된 포인터 변수와 참조자를 이용해서 num에
저장된 값을 출력하는 예제를 완성해보자.
*/
#include <iostream>

using namespace std;

int main() {

    const int num {12};         // 상수선언
    const int *ptr = &num;      // 포인터 변수
    const int *(&rptr) = ptr;   // 포인터 변수를 참조하는 참조자

    cout << num << endl;
    cout << *ptr << endl;
    cout << *rptr << endl;

    return 0;
}
