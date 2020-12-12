#include <stdio.h>

int main() {

    char ch;

    FILE* fp = fopen("test.txt", "rt");  // 읽기 모드로 텍스트 파일을 열기

    if (fp != NULL) {   // 파일 열기에 성공한 경우
        /*
        while (1) {
            ch = fgetc(fp); // 파일포인터에서 문자를 하나씩 꺼내온다
            if (ch == EOF) break;   // 파일포인터가 EOF 이면 break;
            printf("%c\n", ch);
        } */
        while ((ch = fgetc(fp)) != EOF) {
            printf("%c\n", ch);
        }
        fclose(fp);     // 파일을 닫는다
    }

    return 0;
}

/*

문자 가져오기
(ch = fgetc(pf)) != EOF

문자열 가져오기
fgets(str, sizeof(str), fp) != NULL

*/
