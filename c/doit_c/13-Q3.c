// Q3 다음은 Test 함수에서 main 함수의 tips 변수 값을 5로 변경하는 코드입니다.
// 빈칸을 채워서 코드를 완성하세요.
#include <stdio.h>

void Test(int* p) {
    *p = 5;
}

int main() {

    int tips = 0;

    Test(&tips);
    printf("tips = %d\n", tips);

    return 0;
}
