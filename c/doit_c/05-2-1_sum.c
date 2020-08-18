// Sum 함수 호출하기
#include <stdio.h>

int Sum(int value1, int value2) {
    int result = value1 + value2;
    return result;
}

int main() {

    int s;
    s = Sum(2, 3);
    printf("더하기 작업의 결과는 %d\n", s);

	return 0;
}
