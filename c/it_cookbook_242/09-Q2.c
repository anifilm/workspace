/* 02
10진수를 계속해서 2로 나누되 몫이 0이 될 때까지 나머지를 배열에 순차적으로 저장할 수 있다. 이후 그 배열
을 거꾸로 읽으면서 출력하면 그것이 10진수를 2진수로 변환한 결과가 된다. 이 방법을 써서 입력된 10진수를
2진수로 변환하는 프로그램을 작성하라.
*/
#include <stdio.h>

int main() {

    int num, i, count, bin[16] = {0};

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (i = 0; ; i++) {
        if (num == 0) {
            count = i - 1;
            break;
        } else {
            bin[i] = num % 2;
            num = num / 2;
        }
    }

    for ( ; count >= 0; count--)
        printf("%d", bin[count]);

    return 0;
}
