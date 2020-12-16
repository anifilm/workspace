/* 문제 25-2 [메모리 공간의 동적 할당]
문제 2
프로그램 사용자로부터 정수를 입력 받는다. -1이 입력될 때까지 계속해서 입력 받아서,
프로그램 종료 직전에 입력 받은 정수 전부를 순서대로 출력하는 프로그램을 작성해 보자.
그런데 이 문제의 핵심은 프로그램 사용자가 몇 개의 정수를 입력할지 모른다는데 있다.
그래서 이 문제의 해결을 위해서 힙 영역을 사용하기로 하겠다. 일단 길이가 5인 int형
배열을 힙에 할당하자. 그리고 배열이 꽉 찰 때마다 길이를 3씩 늘리기로 하자. 이 때
앞서 소개한 realloc() 함수를 이용하면 상대적으로 쉽게 배열의 길이를 늘릴 수 있다.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {

    int num, arr_len = 5, idx, i;
    int* num_arr = (int*)malloc(sizeof(int) * arr_len);

    idx = 0;
    while (1) {
        scanf("%d", &num);
        if (num == -1) break;
        num_arr[idx] = num;
        if (arr_len == idx + 1) {
            printf("(%d -> %d)\n", arr_len, arr_len + 3);
            arr_len += 3;
            num_arr = (int*)realloc(num_arr, sizeof(int) * arr_len);
        }
        idx++;
    }

    for (i = 0; i < idx; i++)
        printf("%d\n", num_arr[i]);

    free(num_arr);
    return 0;
}
