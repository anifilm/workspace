#include <stdio.h>

int main() {
    
    int num1 = 1234;
    double num2 = 3.14;

    int *ptr_num1 = &num1;
    double *ptr_num2 = &num2;

	printf("포인터의 크기는 %ld입니다.\n", sizeof(ptr_num1));
    printf("포인터 ptr_num1이 가리키고 있는 주소값은 %p입니다.\n", ptr_num1);
    printf("포인터 ptr_num2가 가리키고 있는 주소값은 %p입니다.\n", ptr_num2);
    printf("포인터 ptr_num1이 가리키고 있는 주소에 저장된 값은 %d입니다.\n", *ptr_num1);
    printf("포인터 ptr_num1이 가리키고 있는 주소에 저장된 값은 %f입니다.\n", *ptr_num2);

	return 0;
}