// 동적 메모리 할당을 사용하여 이름 입력 받고 출력하기
#include <stdio.h>
#include <malloc.h>     // malloc, free 함수를 사용하기 위해 추가함

int main() {

    char *p_name;
    p_name = (char *)malloc(32);    // 32바이트의 메모리를 동적 할당합니다.
    if (p_name != NULL) {
        // 메모리 할당에 성공한 경우
        printf("Your name: ");
        gets(p_name);   // 이름을 입력 받음

        printf("Hi~ %s\n", p_name); // 입렵 받은 이름을 출력함
        free(p_name);       // 포인터 변수 p_name에 동적 할당된 메모리를 해제 합니다.
    } else {
        // 메모리 할당에 실패한 경우
        printf("Memory allocation error!!");
    }

    return 0;
}
