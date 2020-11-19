// 단순 삽입 정렬
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

/*

단순 삽입 정렬 (straight insertion sort)은 선택한 요소를 그보다 더 앞쪽에 알맞은
위치에 '삽입하는' 작업을 반복하여 정렬하는 알고리즘 입니다. 단순 선택 정렬과 비슷하게
보일 수 있지만 단순 선택 정렬은 값이 가장 작은 요소를 선택해 알맞은 위치로 옮긴다는
점이 다릅니다.

단순 정렬의 시간 복잡도
지금까지 공부한 세가지 단순 정렬 (버블, 선택, 삽입)의 시간 복잡도는 모두 O(n²)입니다.
(효율이 좋지 않습니다.)

*/
