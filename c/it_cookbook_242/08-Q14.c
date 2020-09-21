// 14 다음 프로그램을 실행해 보라. 이후 이 프로그램과 동일한 역할을 하는 소스코드를 작성하되
// 재귀 호출을 없애고 작성하라.
#include <stdio.h>
/*
void recurse(int n) {
    if (n > 10)
        return;
    printf("%d\n", n);
    recurse(n + 1);
}

int main() {
    int num;
    printf("Enter a natural number: ");
    scanf("%d", &num);
    recurse(num);
    return 0;
}
*/
void recurse(int n) {
    for (; n <= 10; n++)
        printf("%d\n", n);
}

int main() {
    int num;
    printf("Enter a natural number: ");
    scanf("%d", &num);
    recurse(num);
    return 0;
}
