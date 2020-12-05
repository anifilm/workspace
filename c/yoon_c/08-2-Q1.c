/* 문제 08-2 [continue & break의 활용]
문제 1
구구단을 출력하되 짝수 단(2단, 4단, 6단, 8단)만 출력되도록 하자. 또한 2단은 2 x 2까지
4단은 4 x 4까지, 6단은 6 x 6까지, 8단은 8 x 8까지만 출력되도록 프로그램을 구현해 보자.
이렇게 어수선한 문제를 제시하는 이유은 continue와 break문의 사용법을 익히기 위해서다.
그러나 가급적이년 continue와 break문을 사용해서 이 문제를 해결하기 바란다.
*/
#include <stdio.h>

int main() {

    int cur, is;

    for (cur = 2; cur < 10; cur++) {
        if (cur % 2 != 0) continue;
        for (is = 1; is < 10; is++) {
            if (is > cur) break;
            printf("%d x %d = %d\n", cur, is, cur * is);
        }
        printf("\n");
    }

    return 0;
}
