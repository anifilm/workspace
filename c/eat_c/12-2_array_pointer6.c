// 배열과 포인터 6
#include <stdio.h>

int main() {

    int arr[5] = {1, 2, 3, 4, 5};

    printf("a[3]: %d\n", arr[3]);
    printf("*(a + 3): %d\n", *(arr + 3));

	return 0;
}
