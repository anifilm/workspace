/* 03
first.txt와 second.txt를 입력받은 후, first.txt 끝에 second.txt를 이어 붙여 새로운 파일인 merge.txt에 저장하는
프로그램을 작성하라. 단, 입력 텍스트 파일이 존재하지 않을 경우 오류 메시지를 내보내고 프로그램을 종료해야 한다.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {

    int ch;
    FILE* src1 = fopen("14-Q3_first.txt", "rt");
    FILE* src2 = fopen("14-Q3_second.txt", "rt");
    FILE* dest = fopen("14-Q3_merge.txt", "wt");

    if (src1 == NULL || src2 == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    while ((ch = fgetc(src1)) != EOF)
        fputc(ch, dest);
    fputc('\n', dest);
    while ((ch = fgetc(src2)) != EOF)
        fputc(ch, dest);

    if (feof(src1) && feof(src2))
        printf("Merge complete!\n");
    else
        printf("Error while merging.\n");

    fclose(src1);
    fclose(src2);
    fclose(dest);

    return 0;
}
