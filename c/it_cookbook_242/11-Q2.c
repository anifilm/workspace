// 02 main에서 int num, *p, **q;라고 선언했다고 가정하자. 프로그램은 두 가지 방법을 써서
// num에 5를 저장하고 출력해야 한다. 첫번째 방법은 p를 사용해서 num에 5를 저장한 후 p를
// 통해서 num 값을 출력해야 한다. 두번째 방법은 q를 사용하여 num에 5를 저장한후 q를 통해
// 서 num 값을 출력해야 한다.
// 힌트 두번째 방법에서는 q에 p의 주소를 대입한 다음 **q에 접근할 수 있다.
#include <stdio.h>

int main() {

    int num, *p, **q;

    p = &num;
    *p = 5;
    printf("*p: %d\n", *p);

    q = &p;
    printf("**q: %d\n", **q);
    return 0;
}
