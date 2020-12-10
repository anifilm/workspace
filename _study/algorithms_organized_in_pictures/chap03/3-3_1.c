// 사용자로부터 수를 입력받아 양수/음수/제로를 판별하는 알고리즘
#include <stdio.h>

int main() {

    int inputValue;
    const char* decision;

    printf("정수를 입력: ");
    scanf("%d", &inputValue);   // 입력 받음

    if (inputValue > 0)         // 양수이면
        decision = "양수";
    else if (inputValue < 0)    // 음수이면
        decision = "음수";
    else
        decision = "제로";      // 양수, 음수가 아니면

    printf("%s\n", decision);

    return 0;
}
