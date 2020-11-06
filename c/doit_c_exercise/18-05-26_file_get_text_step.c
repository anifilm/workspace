// 텍스트 파일의 내용을 출력하기
#include <stdio.h>
#define MAX_LENGTH 128

int main() {

    int line_count = 1;
    char buffer[MAX_LENGTH];
    FILE* p_file = NULL;

    p_file = fopen("./18-05-26_data.txt", "rt");
    if (p_file != NULL) {
        printf("data.txt 파일의 내용은 다음과 같습니다.\n\n");
        while (fgets(buffer, MAX_LENGTH, p_file) != NULL)
            printf("[%d]번째 줄: %s", line_count++, buffer);
    }
    printf("\n");

    fclose(p_file);

    return 0;
}
