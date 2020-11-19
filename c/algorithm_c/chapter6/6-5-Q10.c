// Q10 단순 삽입 정렬은 배열의 요소 개수가 많아지면 많아질수록 요소 삽입에 필요한
// 비교, 대입 비용이 무시할 수 없을 정도로 커집니다. 이때 배열에서 이미 정렬된 부분
// 은 이진 검색을 사용할 수 있기 때문에 삽입할 위치를 더 빨리 찾을 수 있습니다.
// 이진 검색을 사용하여 프로그램을 수정하세요.
// 이 정렬법은 이진 삽입 정렬 (binary insertion sort)이라는 알고리즘 입니다.
// (안정적이지는 않습니다.)
#include <stdio.h>
#include <stdlib.h>

// 단순 삽입 정렬
void insertion(int a[], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        int tmp = a[i];
        for (j = i; j > 0 && a[j - 1] > tmp; j--) {
            a[j] = a[j - 1];
        }
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
