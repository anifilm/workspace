/* 도전! 프로그래밍 2
도전 1
길이가 10인 배열을 선언하고 총 10개의 정수를 입력 받아서, 홀수와 짝수를 구분 지어
출력하는 프로그램을 작성해 보자. 일단 홀수부터 출력하고 나서 짝수를 출력하도록 하자.
단, 10개의 정수는 main 함수 내에서 입력 받도록 하고, 배열 내에 존재하는 홀수만 출력
하는 함수와 배열 내에 존재하는 짝수만 출력하는 함수를 각각 정의해서 이 두 함수를
호출하는 방식으로 프로그램을 완성하자.

[실행의 예]
총 10개의 숫자 입력
입력: 1
입력: 2
입력: 3
입력: 4
입력: 5
입력: 6
입력: 7
입력: 8
입력: 9
입력: 0

홀수 출력: 1, 3, 5, 7, 9
짝수 출력: 2, 4, 6, 8, 0
*/
#include <stdio.h>

void PrintOdd(int a_arr[], int len) {
    int i;
    for (i = 0; i < len; i++)
        if (a_arr[i] % 2 != 0) printf("%d, ", a_arr[i]);
    printf("\b\b \n");  // 마지막 출력에서 콤마(,) 제거
}

void PrintEven(int a_arr[], int len) {
    int i;
    for (i = 0; i < len; i++)
        if (a_arr[i] % 2 == 0) printf("%d, ", a_arr[i]);
    printf("\b\b \n");  // 마지막 출력에서 콤마(,) 제거
}

int main() {

    int arr[10];
    int i, length = sizeof(arr) / sizeof(int);

    printf("총 %d개의 숫자 입력\n", length);
    for (i = 0; i < length; i++) {
        printf("입력: ");
        scanf("%d", &arr[i]);
    }

    printf("\n홀수 출력: ");
    PrintOdd(arr, length);

    printf("짝수 출력: ");
    PrintEven(arr, length);

    return 0;
}
