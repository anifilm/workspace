// 1분 퀴즈
// 12-1 int형으로 20개 요소의 배열을 만들고 초기값을 모두 0으로 저장해 보세요.
// 단 for문을 이용하여 코딩해야 합니다.
#include <stdio.h>

int main() {

    short student[20], i;

    for (i = 0; i < 20; i++) student[i] = 0;

    // 내용 출력
    for (i = 0; i < 20; i++)
        printf("student[%d] = %d\n", i, student[i]);

	return 0;
}
