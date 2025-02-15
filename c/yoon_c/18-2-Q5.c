/* 문제 18-1 [2차원 배열에 대한 종합점검]
문제 5
아래의 코드를 보자. (3차원 배열이라고 겁을 먹을 필요는 없다. 이 문제는 3차원 배열의
특성을 몰라도 해결할 수 있는 문제다.) 이 예제에서는 인덱스 [1][0][1]의 배열 요소를
출력하고 있다. 이 때 사용된 arr[1][0][1]을 대신할 수 있는 문장을 5개 이상 제시해 보자.
*/
#include <stdio.h>

int main() {

    int arr[2][2][2] = {1, 2, 3, 4, 5, 6, 7, 8};

    printf("%d\n", arr[1][0][1]);

    printf("%d\n", (*(arr + 1))[0][1]);
    printf("%d\n", (*(*(arr + 1) + 0))[1]);
    printf("%d\n", *(*(*(arr + 1) + 0) + 1));

    printf("%d\n", (*(arr[1] + 0))[1]);
    printf("%d\n", *(*(arr[1] + 0) + 1));
    printf("%d\n", *(arr[1][0] + 1));

    return 0;
}
