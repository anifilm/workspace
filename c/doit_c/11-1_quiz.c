// 1분 퀴즈
// 11-1 이전 예제에서 정상적으로 5가 출력되도록 소스 코드를 수정해 보세요.
#include <stdio.h>

int ReturnNum() {
    int num = 5;
    return num;
}

int main() {

    int result;

    result = ReturnNum();
    printf("%d\n", result);

	return 0;
}
