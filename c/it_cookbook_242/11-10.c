#include <stdio.h>

int* num_array() {
    // int i, arr[5];   // local variable return 오류 발생
    int i; static int arr[5];
    for (i = 0; i < 5; i++)
        arr[i] = i;
    return arr;
}

int main() {

    int i, *p = num_array();

    for (i = 0; i < 5; i++)
        printf("%d ", p[i]);
    printf("\n");

    return 0;
}
