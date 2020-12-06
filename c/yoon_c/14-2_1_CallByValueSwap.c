// 값을 전달하는 형태의 함수호출: Call-by-value
#include <stdio.h>

void Swap(int n1, int n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
    printf("n1 n2: %d %d\n", n1, n2);
}

int main() {

    int num1 = 10;
    int num2 = 20;

    printf("num1 num2: %d %d\n", num1, num2);

    Swap(num1, num2);     // num1과 num2에 저장된 값이 서로 바뀌길 기대 하지만...
    printf("num1 num2: %d %d\n", num1, num2);

    return 0;
}
