// 배열과 포인터 4
#include <stdio.h>

int main() {

    int arr[3] = {1, 2, 3};

    // 배열 arr 변수 이름은 배열의 첫번째 요소의 주소값 포인터 이다.
    printf("arr 의 정체 : %p \n", arr);
    printf("arr[0] 의 주소값 : %p \n", &arr[0]);

	return 0;
}
