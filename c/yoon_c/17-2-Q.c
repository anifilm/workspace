/* 문제 17-1 [이중 포인터 변수의 활용]
다음과 같이 두 개의 int형 포인터 변수와 길이가 5인 int형 배열을 선언했다.
  int* maxPtr;
  int* minPtr;
  int arr[5];

그리고 MaxAndMin이란 이름의 함수를 정의하고 이를 호출하면서 위의 배열과 두 포인터
변수에 대한 정보를 전달하자. 어떠한 정보를 어떻게 전달할지는 여러분이 결정할 몫이다.
그리고 함수호출이 완료되면, 포인터 변수 maxPtr에는 가장 큰 값이 저장된 배열 요소의
주소 값이, minPtr에는 가장 작은 값이 저장된 배열 요소의 주소 값이 저장되어야 한다.
*/
#include <stdio.h>

void MaxAndMin(int** p_max, int** p_min, int* arr, int len) {
    int i;
    *p_max = *p_min = &arr[0];
    for (i = 1; i < len; i++) {
        if (arr[i] > **p_max) *p_max = &arr[i];
        if (arr[i] < **p_min) *p_min = &arr[i];
    }
}

int main() {

    int* maxPtr;
    int* minPtr;
    int arr[5];
    int i;

    printf("정수를 입력\n");
    for (i = 0; i < 5; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    MaxAndMin(&maxPtr, &minPtr, arr, 5);

    printf("\n입력된 배열의 요소\n");
    printf("[");
    for (i = 0; i < 5; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\b\b]\n");

    printf("\n최대값: %p, %d\n", maxPtr, *maxPtr);
    printf("최소값: %p, %d\n", minPtr, *minPtr);

    return 0;
}
