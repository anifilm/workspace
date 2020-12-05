/* 도전! 프로그래밍 1
도전 7
프로그램 사용자로부터 숫자 n을 입력 받는다. 그리고 나서 다음 공식이 성립하는 k의 최대값
을 계산해서 출력하는 프로그램을 작성해 보자.
  2^k ≤ n

[실행의 예]
상수 n 입력: 256
공식을 만족하는 k의 최대값은 8

[도전7의 해결을 위한 GUIDE]
수식이 등장했다고 해서 두려워하지 말자. 위의 식을 그대로 반복문으로 옮겨 놓으며 쉽게
해결되는 문제이다.
*/
#include <stdio.h>
#include <math.h>

int main() {

    int k, n, result;

    printf("상수 n 입력: ");
    scanf("%d", &n);

    k = 1;
    while (1) {
        result = pow(2, k);
        if (result >= n) break;
        k++;
    }
    printf("공식을 만족하는 k의 최대값은 %d\n", k);

    return 0;
}
