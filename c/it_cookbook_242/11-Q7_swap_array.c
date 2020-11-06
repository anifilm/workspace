// 07 main에서 int arr[5], arr2[5];라는 배열을 선언하고 print_array 함수를 불러 입력 내용
// 을 출력하라. 이후 두 배열과 요소의 개수를 인자로 넘겨주면서 swap_array 함수를 호출하여
// 배열 내용을 서로 바꾸어 보라. 이후 main으로 되돌아와서 배열 내요이 바뀌었는느 다시 print_
// array 함수를 불러 출력하라. 단, 두 함수 모두 포인터 기호만 써서 구현해야 하며 배열 요소의
// 개수는 다섯 개로 한다.
// void print_array(int* arr, int length);
// void swap_array(int* a, int* b, int length);
// > Enter the contents of first array.
// > 1 2 3 4 5 ([Enter])
// > Enter the Contents of second array.
// > 10 20 30 40 50 ([Enter])
// > Before swapping.
// > first: 1 2 3 4 5
// > second: 10 20 30 40 50
// > After swapping.
// > first: 10 20 30 40 50
// > second: 1 2 3 4 5
#include <stdio.h>

void print_array(int* arr, int length) {
    for (int i = 0; i < length; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void swap_array(int* a, int* b, int length) {
    int i, temp;
    for (i = 0; i < length; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

int main() {

    int i, j, arr[5], arr2[5];

    printf("Enter the contents of first array.\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Enter the Contents of second array.\n");
    for (j = 0; j < 5; j++)
        scanf("%d", &arr2[j]);

    printf("Before swapping.\n");
    printf("first: ");
    print_array(arr, i);
    printf("second: ");
    print_array(arr2, j);

    swap_array(arr, arr2, i);
    printf("After swapping.\n");
    printf("first: ");
    print_array(arr, i);
    printf("second: ");
    print_array(arr2, j);

    return 0;
}
