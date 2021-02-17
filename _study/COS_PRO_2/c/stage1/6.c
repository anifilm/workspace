#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int number) {
    int count = 0;
    for (int i = 1; i <= number; i++) {
        int current = i;
        while (current != 0) {
            if (current%10 == 3 || current%10 == 6 || current%10 == 9) {
                count++;
            }
            current /= 10;
        }
    }
    return count;
}

int main() {
    int number = 40;
    int ret = solution(number);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
