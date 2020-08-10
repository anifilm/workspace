#include <stdio.h>

int main() {

    for (int i = 1; i <= 100; i++) {    // 1부터 100까지 100번 반복

        if (i % 3 == 0 && i % 5 == 0)   // 3과 5의 공배수 일때 (15의 배수 가능, i % 15 == 0)
            printf("FizzBuzz!\n");      // FizzBuzz! 출력
        else if (1 % 3 == 0)            // 3의 배수 일때
            printf("Fizz!\n");          // Fizz! 출력
        else if (i % 5 == 0)            // 5의 배수 일때
            printf("Buzz!\n");          // Buzz! 출력
        else
            printf("%d\n", i);          // 그 이외 조건에서는 숫자 출력
    }

    return 0;
}
