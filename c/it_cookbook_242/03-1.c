#include <stdio.h>

int main() {

    int my_age, your_age;
    int her_age = 20;

    my_age = her_age + 1;
    printf("My age is %d\n", my_age);

    // 초기화 하지 않은 변수를 사용하므로 오류
    // my_age = your_age + 1;
    // printf("My age is %d\n", my_age);

	return 0;
}
