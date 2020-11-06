// C형 - 매개변수로 다른 함수의 변수 주소 받기
#include <stdio.h>

void Test(short* ptr) { // 포인터 변수 ptr를 통해 주소값을 전달 받음
    short soft = 0;
    soft = *ptr;        // soft 변수에 ptr의 주소값(tips)가 가진 값을 대입
    printf("(soft = *ptr;) soft = %d\n", soft);

    *ptr = 3;           // 포인터 변수 ptr이 가리키는 주소값의 변수에 3을 대입
}

int main() {

    short tips = 5;

    Test(&tips);        // Test 함수에 tips의 주소값을 전달

    // Test 함수에서 *ptr = 3; 으로 tips 변수에 값 3이 할당됨
    printf("(*ptr = 3;) tips = %d\n", tips);

    return 0;
}
