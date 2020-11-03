// memcmp 함수
#include <stdio.h>
#include <string.h>

int main() {

    int arr[10] = {1, 2, 3, 4, 5};
    int arr2[10] = {1, 2, 3, 4, 5};

    if (memcmp(arr, arr2, 5) == 0)
        printf("arr 과 arr2 는 일치!\n");
    else
        printf("arr 과 arr2 는 일치하지 않음\n");

    return 0;
}
