// 문제 02-1 [참조자 기반의 Call-by-reference 구현]
// 문제 2
// 앞서 소개한 예제 ref_swap.cpp의 SwapByRef2 함수를 다음의 형태로 호출하면 컴파일
// 에러가 발생한다.
// SwapByRef2(23, 45);
// 컴파일 에러가 발생하는 이유가 무엇인지 설명해보자.
#include <iostream>

using namespace std;

void SwapByRef2(int& ref1, int& ref2) {
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}

int main() {

//  SwapByRef2(23, 45);     // 컴파일 에러

    const int& ref1 = 23;
    const int& ref2 = 45;

    cout << ref1 << endl;
    cout << ref2 << endl;

    return 0;
}

/*

스왑 함수에 숫자 상수를 호출하였기 때문이다.

int& ref1 = 23;
int& ref2 = 45;
와 같이 r-value에 상수를 reference 지정하면 컴파일 에러가 발생한다.

const int& ref1 = 23;
const int& ref2 = 45;
와 같이 l-value를 상수 지정하면 선언이 가능해진다.

*/
