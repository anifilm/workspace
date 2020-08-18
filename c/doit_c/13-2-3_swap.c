// 직접 주소 지정 방식으로 변수 값 교환하기
#include <stdio.h>

void Swap(int a,  int b) {

    int temp = a;
    a = b;
    b = temp;
    // 함수내에 전달된 값은 변경 가능 (원본 변경 불가)
}

int main() {

    int start = 96, end = 5;

    printf("before: start = %d, end = %d\n", start, end);

    if (start > end) {
        Swap(start, end);   // 함수를 통하여 값을 변경하려 하지만 값이 복사되어
                            // 전달 되므로 원본값은 수정되지 않는다.
    }

    printf("after: start = %d, end = %d\n", start, end);

	return 0;
}
