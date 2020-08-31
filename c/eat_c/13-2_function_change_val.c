#include <stdio.h>

int change_val(int i) {
    i = 3;
    return 0;
}

int main() {

    int i = 0;

    printf("호출 이전 i 의 값: %d\n", i);

    change_val(i);
    printf("호출 이후 i 의 값: %d\n", i);

	return 0;
}
