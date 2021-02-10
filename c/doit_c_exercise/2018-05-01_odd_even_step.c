// 짝수와 홀수 값을 분리해서 저장하기
#include <stdio.h>
#define MAX_ITEM 10

int main() {

    int i, temp, odd_count = 0, even_count = 0, data[MAX_ITEM];

    for (i = 0;i < MAX_ITEM; i++) {
        printf("%d번 정수값 입력: ", i + 1);
        scanf("%d", &temp);
        // 정수 입력시 홀수는 앞에서 부터 짝수는 뒤에서 부터 저장한다.
        if (temp % 2 == 1)
            data[odd_count++] = temp;
        else {
            even_count++;
            data[MAX_ITEM - even_count] = temp;
        }
    }

    printf("\n배열에 저장된 값 출력: %d", data[0]);
    for (i = 1; i < MAX_ITEM; i++)
        printf(", %d", data[i]);
    printf("\n");

    printf("홀수의 개수: %d개, 짝수의 개수: %d개\n", odd_count, even_count);

    return 0;
}
