/* 문제 14-2 [const 선언에 대한 추가적인 이해]
문제 2
아래의 예제는 한 가지 지정할 만한 사항을 지니고 있다. 그것이 무엇인지 이야기해 보자.
특히 이와 관련해서 ShowData 함수를 유심히 관찰하기 바란다.
*/
#include <stdio.h>

void ShowData(const int* ptr) {
    int* r_ptr = ptr;   // 값 변경이 불가능한 포인터의 주소값을 r_ptr에 재할당
                        // 값 변경을 시도할 가능성에 경고!
    *r_ptr = 20;        // 값 변경을 시도하여 대상의 값을 변경 (예상할 수 없는 결과)
    printf("%d\n", *r_ptr);
}

int main() {

    int num = 10;
    int* ptr = &num;

    ShowData(ptr);

    return 0;
}
