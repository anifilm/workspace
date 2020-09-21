// 01 아래 프로그램의 출력을 예상해 보라. 또, main의 printf 문이 n * 10을 출력하도록 main 함수와
// ten_times 함수를 수정하라.
#include <stdio.h>
/*
void ten_times(int n) {
    n *= 10;            // n = 50
}

int main() {
    int n = 5;
    ten_times(n);
    printf("%d\n", n);  // n = 5
    return 0;
}
*/
void ten_times(int n) {
    n *= 10;
    printf("%d\n", n);
}

int main() {
    int n = 5;
    ten_times(n);
    return 0;
}
