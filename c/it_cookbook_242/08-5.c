#include <stdio.h>

int main() {

    int i = 1;

    {
        printf("Printing from 1 to 3\n");
        int count = i;
        while (count < 4)
            printf("%d", count++);
    }
    // 변수의 유효 영역 밖에서 count 변수에 접근하려 하여 오류 발생
    // count 변수는 변수 블록이 끝나면 수명이 다하여 소멸하게 된다.
    // printf("%d", count);

    return 0;
}
