#include <stdio.h>

int main() {

    int a = 1, b = 0;

    if (a)
        if (b)
            printf("a and b are both true.\n");
    else
        printf("a is not true.\n");

    return 0;
}

/*

중첩 if 문에서 자주 발생하는 오류, Dangling Else
이는 중첩 if 문 다음에 else가 매달려 그것이 그 위의 어떤 if에 걸리는지 모호한 경우
들여쓴 모습으로 보아 이 예제를 작성한 프로그래머는 else가 첫번째 if에 대한 else로
의도 했을 것이다.
그러나 else는 항상 그 직전의 if에 걸리게 된다.
따라서 else는 두번째 if에 걸리고 이 else는 a가 true인 동시에 b가 false일 때에 해당
되므로 else 다음의 printf가 실행된다.
결국 잘못된 들여 쓰기가 되어 있다.

[올바른 표현]

if (a)
    if (b)
        printf("a and b are both true.\n");
    else
        printf("a is not true.\n");

*/
