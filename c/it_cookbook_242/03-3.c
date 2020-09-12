#include <stdio.h>

int main() {

    int one, two, three;

    one = 1;
    three = two + 1;    // two 값을 정의하지 않고 사용하여 쓰레기 값이 사용되게 된다
    two = one + 1;

    printf("one: %d, two: %d, three: %d\n", one, two, three);

    one = 1;
    two = one + 1;
    three = two + 1;

    printf("one: %d, two: %d, three: %d\n", one, two, three);

	return 0;
}
