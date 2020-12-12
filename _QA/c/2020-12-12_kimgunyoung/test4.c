/*
Q4. 길이가 6인 int형 배열에 1, 2, 3, 4, 5, 6을 입력 후 저장된 순서가
6, 5, 4, 3, 2, 1 거꾸로 출력되도록 하라 (아래 void REVERSE 함수 원형 반드시 사용)

*/
#include<stdio.h>

void REVERSE(int*,int);

int main(void) {

    int arr[6];
    int i;

    printf("6개 정수를 입력(1,2,3,4,5,6): ");

    for (i = 0; i < 6; i++){
        scanf("%d", &arr[i]);
    }

    REVERSE(arr, 6);

    return 0;
}

void REVERSE(int* A, int size) {
    int i, count = 0;

    for (i = size - 1; i >= 0; i--) {
        printf("%d번째 배열값: %d ", count, A[i]);
        count++;
    }
    printf("\n");
}

/*

i = size - 1;
앞서 설명 드렸듯이 배열의 인덱스와 size에 대한 내용을 한번더 설명드릴게요
arr[6] = {1, 2, 3, 4, 5, 6};
이라면 배열의 크기(size)는 6이되고 인덱스는 0, 1, 2, 3, 4, 5 입니다.

함수에서 i의 값이 6 - 1이 되어야 하는 이유이죠
그래서 for문을 인덱스 5부터 0까지 출력해주면 뒤집어서 출력이 됩니다.
*/
