// 연습문제 1-2
// 정수 값의 배열이 주어졌을 때 배열의 각 원소를 누적합으로 갱신하는 재귀 함수를
// 작성해 봅시다. 예를 들어 입력 배열이 다음과 같다고 합시다.
// {1, 2, 3, 4, 5, 6}
// 그러면 이 함수는 배열을 다음과 같이 갱신해야 합니다.
// {1, 3, 6, 10, 15, 21}
#include <stdio.h>

void prefix_sum_array(int a_arr[], int a_size) {
    int i;
    for (i = 1; i < a_size; i++)
        a_arr[i] += a_arr[i - 1];
}

void print_array(int a_arr[], int a_size) {
    int i;
    for (i = 0; i < a_size; i++)
        printf("%d ", a_arr[i]);
    printf("\n");
}

int main() {

    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);

    printf("before prefix_sum_array\n");
    print_array(arr, size);

    printf("\nafter prefix_sum_array\n");
    prefix_sum_array(arr, size);
    print_array(arr, size);

    return 0;
}
