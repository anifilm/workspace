// Q9 단순 삽입 정렬에서 배열의 첫번째 요소 (a[0])부터 데이터를 저장하지 않고 a[1]
// 부터 데이터를 저장하면 a[0]을 보초로 하여 삽입을 마치는 조건을 줄일 수 있습니다.
// 이 아이디어를 적용한 단순 삽입 정렬 함수를 수정하세요.
#include <stdio.h>
#include <stdlib.h>

// 단순 삽입 정렬
void insertion(int a[], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        int tmp = a[i];
        for (j = i; j > 0 && a[j - 1] > tmp; j--)
            a[j] = a[j - 1];
        a[j] = tmp;
    }
}

int main() {

    int i, nx;
    int* x;         // 배열의 첫번째 요소에 대한 포인터

    puts("단순 삽입 정렬");
    printf("요소 개수: ");
    scanf("%d", &nx);
    x = (int*)calloc(nx, sizeof(int));    // 요소의 개수가 nx인 int형 배열을 생성

    for (i = 0; i < nx; i++) {
        printf("x[%d]: ", i);
        scanf("%d", &x[i]);
    }

    insertion(x, nx);  // 배열 x를 단순 삽입 정렬

    printf("\n오름차순으로 정렬했습니다.\n");
    for (i = 0; i < nx; i++)
        printf("x[%d] = %d\n", i, x[i]);

    free(x);        // 배열 해제
    return 0;
}
