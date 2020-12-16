/* 도전! 프로그래밍 4
도전 5
두 개의 텍스트 파일이 같은지 다른지를 확인하는 프로그램을 작성해 보자. 단순히 공백문자
하나가 차이를 보여도 두 텍스트 파일은 다른 것으로 판별이 나야 한다.

[실행의 예]
다음은 실행파일의 이름이 comp.exe이고 비교의 대상이 되는 두 파일의 이름이 각각 d1.txt
와 d2.txt인 경우의 실행의 예이다.

C:\> comp d1.txt d2.txt
두 개의 파일은 완전히 일치 합니다.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char str1[100], str2[100];
    int flag = 1;
    FILE* fp1 = fopen("28-5_d1.txt", "rt");
    FILE* fp2 = fopen("28-5_d2.txt", "rt");
    if (fp1 == NULL || fp2 == NULL) {
        puts("파일열기 실패!");
        return -1;
    }

    while (1) {
        if (feof(fp1) != 0 && feof(fp2) != 0) break;
        fgets(str1, sizeof(str1), fp1);
        fgets(str2, sizeof(str2), fp2);
        if (strcmp(str1, str2) != 0) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        fputs("두 개의 파일은 완전히 일치 합니다.", stdout);
    else
        fputs("두 개의 파일은 불일치 합니다.", stdout);

    fclose(fp1);
    fclose(fp2);
    return 0;
}
