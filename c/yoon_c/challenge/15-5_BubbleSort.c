/* 도전! 프로그래밍 2
도전 5
이번에는 정렬 알고리즘을 하나 소개하고, 이것을 이용한 프로그래밍 문제를 제시하고자 한다.
정렬이란 정의된 순서에 의해서 대상을 재배치하는 것을 의미한다.
  버블 정렬(bubble sort) 알고리즘 설명 생략...
*/
#include <stdio.h>

// 버블 정렬 함수 (오름차순 정렬)
void BubbleSort(int a_arr[], int len) {
    int i, j, temp;
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < (len - 1) - i; j++) {
            if (a_arr[j] > a_arr[j + 1]) {
                temp = a_arr[j];
                a_arr[j] = a_arr[j + 1];
                a_arr[j + 1] = temp;
            }
        }
    }
}

int main() {

    int arr[4] = {3, 2, 4, 1};
    int i;

    BubbleSort(arr, sizeof(arr)/ sizeof(int));
    for (i = 0; i < 4; i++)
        printf("%d, ", arr[i]);
    printf("\b\b \n");

    return 0;
}
