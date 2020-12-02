/*
https://cafe.naver.com/cstudyjava/127121
도전 프로그래밍4 도전5 질문
마싯는메로나 2020.11.25.
응용프로그램 위치 일치하고 텍스트파일 위치도 일치하고 텍스트파일 내용도 서로 복사붙여넣기
한거라 똑같거든요? 코드가 잘못된건가요? 구글링해보니까 저랑 똑같이 코드짜신부도있던데 그분은
되는데 왜 저는 안될까요..
*/
#include <stdio.h>
#include <string.h>

int main() {

    char a, b;
    FILE* fp1 = fopen("./2020-11-25_comp_file_d1.txt", "rt");
    FILE* fp2 = fopen("./2020-11-25_comp_file_d2.txt", "rt");
    if (fp1 == NULL || fp2 == NULL) {
        printf("file open error!\n");
        return 0;
    }

    while (a != EOF) {
        a = fgetc(fp1);
        b = fgetc(fp2);
        // printf("check: %c, %c\n", a, a);

        if (a != b) {
            printf("파일은 같지 않습니다.\n");
            break;
        }

        if (feof(fp1) && feof(fp2)) {
            printf("파일이 일치 합니다.\n");
            break;
        }
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}
