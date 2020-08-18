// 간접 주소 지정 방식 (포인터)으로 변수 값 교환하기
#include <stdio.h>

void Swap(int *pa,  int *pb) {

    int temp = *pa;
    *pa = *pb;
    *pb = temp;
    // 각 변수의 주소값에 할당된 원본값을 직접 수정하여 원본값이 변경된다.
}

int main() {

    int start = 96, end = 5;

    printf("before: start = %d, end = %d\n", start, end);

    if (start > end) {
        Swap(&start, &end);     // 각 변수의 주소값을 함수에 전달
    }

    printf("after: start = %d, end = %d\n", start, end);

	return 0;
}
