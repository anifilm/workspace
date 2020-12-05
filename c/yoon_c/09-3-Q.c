/* 문제 09-2 [static 변수의 활용]
다음 프로그램 사용자가 입력하는 값을 누적하여 그 합계를 출력하는 예제이다.
  예제 생략...

위의 예제에서는 함수 AddToTotal에서의 사용을 목적으로 전역변수 total을 선언하였는데,
이를 static 변수로 대체해보자. 단, static 변수로의 대체과정에서 main 함수의 변경은
없어야 하며 실행결과도 동일해야 한다.
*/
#include <stdio.h>

//int total;    // 전역 변수를 AddToTotal() 함수내로 이동

int AddToTotal(int num) {
    static int total;   // 전역 변수를 정적 변수로 변경
    total += num;
    return total;
}

int main() {

    int i, num;

    for (i = 0; i < 3; i++) {
        printf("입력 %d: ", i + 1);
        scanf("%d", &num);
        printf("누적: %d\n\n", AddToTotal(num));
    }

    return 0;
}
