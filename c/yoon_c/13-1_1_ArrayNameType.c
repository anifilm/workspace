// 배열의 이름은 무엇을 의미하는가?
#include <stdio.h>

int main() {

    int arr[3] = {0, 1, 2};

    printf("배열 이름의 주소 값: %p\n", arr);
    printf("첫 번째 요소의 주소 값: %p\n", &arr[0]);
    printf("두 번째 요소의 주소 값: %p\n", &arr[1]);
    printf("세 번째 요소의 주소 값: %p\n", &arr[2]);

    return 0;
}
