// 01 문장 두 개를 gets로 입력받아 fputs로 텍스트 파일에 저장하라. 단, 첫 줄을 출력한 다음
// 에는 fputc('\n', fp); 명령을 넣어 줄 바꿈을 해야 한다. 출력 파일을 보고 결과가 제대로
// 되었는지를 확인하라.
#include <stdio.h>
#include <stdlib.h>

int main() {

    char buff1[100], buff2[100];

    FILE *fp = fopen("14_Q1_wt.txt", "wt");
    if (fp == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    printf("Enter first string.\n");
    gets(buff1);
    printf("Enter second string.\n");
    gets(buff2);

    fputs(buff1, fp);
    fputc('\n', fp);
    fputs(buff2, fp);

    fclose(fp);
    return 0;
}
