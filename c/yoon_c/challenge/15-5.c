/* 도전! 프로그래밍 2
도전 5
이번에는 정렬 알고리즘을 하나 소개하고, 이것을 이용한 프로그래밍 문제를 제시하고자 한다.
정렬이란 정의된 순서에 의해서 대상을 재배치하는 것을 의미한다.
  버블 정렬(bubble sort) 알고리즘 설명 생략...

자! 그럼 이제 문제를 제시하겠다. 배열에 저장되어 있는 요소들을 내림차순으로 정렬하는
함수를 정의하자. (함수의 이름은 DesSort로 정의하자) 그리고 이 함수를 호출하는 예제를
작성해 보자. 프로그램의 흐름은 다음과 같이 구성을 하자. 일단 길이가 7인 int형 배열을
선언해서 프로그램 사용자로부터 7개의 정수를 입력 받도록 하자. 그리고 입력 받은 정수를
내림차순으로 정렬하기 위해서, 배열을 인자로 전달하면서 DesSort 함수를 호출하자.
그리고 마지막으로 제대로 정렬이 되었는지 확인하기 위해서 배열의 요소들을 순서대로
출력해 보자.

[실행의 예]
입력: 1
입력: 2
입력: 3
입력: 4
입력: 5
입력: 6
입력: 7

[7, 6, 5, 4, 3, 2, 1]
*/
#include <stdio.h>

#define swap(type, x, y) do { type t = x; x = y; y = t; } while (0)

// 버블 정렬 함수 (내림차순 정렬)
void DesSort(int a_arr[], int len) {
    int i, j;
    for (i = 0; i < len - 1; i++) {
        for (j = len - 1; j > i; j--) {
            if (a_arr[j - 1] < a_arr[j])
                swap(int, a_arr[j - 1], a_arr[j]);
        }
    }
}

int main() {

    int arr[7];
    int i, length = sizeof(arr) / sizeof(int);

    printf("총 %d개의 숫자 입력\n", length);
    for (i = 0; i < length; i++) {
        printf("입력: ");
        scanf("%d", &arr[i]);
    }

    DesSort(arr, length);
    printf("\n[");
    for (i = 0; i < length; i++)
        printf("%d, ", arr[i]);
    printf("\b\b]\n");

    return 0;
}
