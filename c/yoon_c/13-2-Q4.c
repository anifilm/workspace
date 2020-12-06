/* 문제 13-1 [포인터를 이용한 배열의 접근]
문제 4
길이가 6인 int형 배열 arr을 선언하고 이를 1, 2, 3, 4, 5, 6으로 초기화한 다음, 배열에
저장된 값의 순서가 6, 5, 4, 3, 2, 1이 되도록 변경하는 예제를 작성해 보자. 단, 배열의
앞과 뒤를 가리키는 포인터 변수 두 개를 선언해서 이를 활용하여 저장된 값의 순서를 뒤바
꿔야 한다.
*/
#include <stdio.h>

int main() {

    int arr[6] = {1, 2, 3, 4, 5, 6};
    int* ptr_s = &arr[0];
    int* ptr_e = &arr[5];
    int i, temp;

    for (i = 0; i < 3; i++) {
        temp = *ptr_s;
        *ptr_s = *ptr_e;
        *ptr_e = temp;
        ptr_s++;  ptr_e--;
    }

    for (i = 0; i < 6; i++)
        printf("%d ", arr[i]);
    printf("\n");

    for (i = 0; i < 6; i++)
        printf("%d ", *(arr + i));
    printf("\n");

    return 0;
}
