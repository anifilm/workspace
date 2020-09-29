// 17 상태 변화를 추적함으로써 입력 문장에서 전치사 in이 몇 번 나오는지 판단하여 출력하는 프로그램을
// 작성하라.
// 힌트 state 값이 0이면 wait state, 1이면 'i'가 입력된 상태, 2이면 'i', 'n'까지 입력된 상태, 이후
// 빈칸(' ')이 입력되어야 한 번 나온 것이다. 예제를 참고하라.
// > Enter a sentence.
// > I am interested in individual income in vintage market. ([Enter])
// > The preposition 'in' appears 2 times.
#include <stdio.h>

int main() {

    char ch;
    int state = 0, count = 0;

    printf("Enter a sentence.\n");
    while (ch != '\n') {
        scanf("%c", &ch);
        if (state == 0 && ch == 'i')
            state = 1;
        else if (state == 1 && ch == 'n')
            state = 2;
        else if (state == 2 && ch == ' ')
            state = 3;
        else if (state == 2 && ch != ' ')
            state = 0;
        // printf("%c state: %d\n", ch, state);

        if (state == 3) {
            count++;
            state = 0;
        }
    }
    printf("\nThe preposition 'in' appears %d times.\n", count);

    return 0;
}
