#include <stdio.h>

// 입력 버퍼를 지우는 다양한 방법
void ClearLineFromReadBuffer() {
    while (getchar() != '\n');
//  rewind(stdin);
//  fflush(stdin);  /* 사용을 권장하지 않는다. */
}

int main() {

    char perID[7];
    char name[10];

    fputs("주민번호 앞 6자리 입력: ", stdout);
    fgets(perID, sizeof(perID), stdin);

    // 입력버퍼 비우기
    ClearLineFromReadBuffer();

    fputs("이름 입력: ", stdout);
    fgets(name, sizeof(name), stdin);

    printf("주민번호: %s\n", perID);
    printf("이름: %s\n", name);

    return 0;
}

/*

출력버퍼를 비우는 함수들

int fflush(FILE* stream);
    -> 함수호출 성공 시 0, 실패 시 EOF 반환

void rewind(FILE* stream);
    -> 함수호출 성공 시 파일 포인터의 위치를 0으로 설정한다 (반환값 없음)

*/
