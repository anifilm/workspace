#include <stdio.h>

int main() {

    int decimal = 13;
    int binary[20] = {0,};

    int position = 0;

    printf("decimal %d to binaty: ", decimal);

    while (1) {
        binary[position] = decimal % 2;     // 2로 나눈 나머지를 배열에 할당
        decimal = decimal / 2;              // 2로 나눈 몫을 재할당

        position++;     // 자릿수 변경

        if (decimal == 0)       // 몫이 0이 되면 반복을 끝냄
            break;
    }

    // 배열의 요소를 역순으로 출력
    for (int i = position - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
