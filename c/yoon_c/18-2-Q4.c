/* 문제 18-1 [2차원 배열에 대한 종합점검]
문제 4
다음 예제의 출력 결과는 무엇인가? 이는 예제를 실행하지 않고 답을 해야 한다.

*/
#include <stdio.h>

int main() {

    int arr[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    printf("%d %d\n", arr[1][0], arr[0][1]);             // 3 2
    printf("%d %d\n", *(arr[2] + 1), *(arr[1] + 1));     // 6 4
    printf("%d %d\n", (*(arr + 2))[0], (*(arr + 0))[1]); // 5 2
    printf("%d %d\n", **arr, *(*(arr + 0) + 0));         // 1 1

    return 0;
}
