// scanf 함수를 사용하여 정수와 실수 값 입력 받기
#include <stdio.h>

int main() {

    int int_data;
    float float_data;

    scanf("%d", &int_data);     // 정수 값을 입력 받음
    scanf("%f", &float_data);   // 실수 값을 입력 받음

    printf("input: %d, %f\n", int_data, float_data);

	return 0;
}
