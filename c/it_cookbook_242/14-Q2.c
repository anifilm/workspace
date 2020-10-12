// 02 입력 텍스트 파일에 세 줄의 문장을 입력한 후, 그것을 역순으로 화면에 출력하는 다음
// 프로그램을 완성하라.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char text[10][100];                     // 최대 10문장. 문장 길이 99바이트
    char buff[100];
    int i, j;

    FILE *fp = fopen("14-Q2_original.txt", "rt");
    if (fp == NULL) {                       // 널 텍스트
        printf("Error opening file.\n");    // 오류 메시지 출력
        exit(1);                            // 종료
    }

    for (i = 0; fgets(buff, sizeof(buff), fp) != NULL; i++)     // fgets의 리턴 값이 널이 아닐 때까지
        strcpy(text[i], buff);              // buff를 text[i]에 복사

    if (!feof(fp)) {                        // fp가 파일 끝이 아니면
        printf("Error reading character.\n");
        exit(1);
    }

    for (j = i - 1; j >= 0; j--)            // j 인덱스가 i 인덱스의 역순으로 가면서
        fputs(text[j], stdout);             // j번째 요소를 stdout에 출력

    fclose(fp);                             // 파일 닫기
    return 0;
}
