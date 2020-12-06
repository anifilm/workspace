/* 문제 13-1 [포인터를 이용한 배열의 접근]
문제 1
길이가 5인 int형 배열 arr을 선언하고 이를 1, 2, 3, 4, 5로 초기화한 다음, 이 배열의
첫 번째 요소를 가리키는 포인터 변수 ptr을 선언한다. 그 다음 포인터 변수 ptr에 저장
된 값을 증가시키는 형태의 연산을 기반으로 배열 요소에 접근하면서 모든 배열 요소의
값을 2씩 증가시키고, 정상적으로 증가가 이뤄졌는지 확인하는 예제를 작성해 보자.
*/
#include <stdio.h>

int main() {

    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = &arr[0];    // int* ptr = arr; 과 동일한 문장
    int i;

    for (i = 0; i < 5; i++) {
    //  *ptr += 2;
    //  ptr++;
        *(ptr++) += 2;
    }

    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    for (i = 0; i < 5; i++)
        printf("%d ", *(arr + i));
    printf("\n");

    return 0;
}
