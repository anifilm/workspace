#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int point) {
    if (point < 1000)
        return 0;
    return point / 100 * 100;
}

int main() {
    int point = 2323;
    int ret = solution(point);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
