/* 문제 11-1 [1차원 배열의 활용]
문제 1
길이가 5인 int형 배열을 선언해서 프로그램 사용자로부터 총 5개의 정수를 입력 받자!
그리고 입력이 끝나면 다음의 내용을 출력하도록 예제를 작성해 보자.
 - 입력된 정수 중에서 최대값
 - 입력된 정수 중에서 최소값
 - 입력된 정수의 총 합

단, 반드시 입력을 완료한 상태에서 '최대값'과 '최소값' 그리고 '총 합'을 계산해야 한다.
참고로 배열을 대상으로 scanf문을 구성할 때에는 다음과 같이 해야 한다.
  scanf("%d", &arr[2]);     // 3번째 배열 요소에 정수 값 입력 받음

변수를 대상으로 & 연산자를 붙여주듯이, 배열 요소를 대상으로 할 때에도 & 연산자를
붙여야 한다.
*/
#include <stdio.h>

int main() {

    int arr[5];
    int i, max, min, sum = 0;

    printf("5개의 배열 요소를 입력\n");
    for (i = 0; i < 5; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");

    printf("입력된 배열의 요소\n");
    printf("[");
    for (i = 0; i < 4; i++)
        printf("%d, ", arr[i]);
    printf("%d]\n\n", arr[i]);

    max = arr[0];
    for (i = 1; i < 5; i++)
        if (arr[i] > max) max = arr[i];
    printf("최대값: %d, ", max);

    min = arr[0];
    for (i = 1; i < 5; i++)
        if (arr[i] < min) min = arr[i];
    printf("최소값: %d, ", min);

    for (i = 0; i < 5; i++)
        sum += arr[i];
    printf("총 합: %d\n", sum);

    return 0;
}
