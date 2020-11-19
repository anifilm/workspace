// Q11 Q10의 알고리즘은 삽입할 위치의 검색은 빠르지만 삽입을 위해 요소를 하나씩 뒤쪽
// 으로 미는 작업 비용이 단순 삽입 정렬 알고리즘과 같습니다. 요소를 뒤쪽으로 미는
// 작업을 표준 라이브러리의 memmove 함수를 사용해서 구현하면 비용을 줄여 좀 더 빠른
// 속도를 얻을 수 있습니다. 이 아이디어를 바탕으로 이진 삽입 정렬 함수를 수정하세요.
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
