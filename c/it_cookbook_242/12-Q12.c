// 12 "quit"를 입력할 때까지 계속해서 단어를 입력받아 2차원 동적 배열에 저장한 뒤 그 동안
// 입력된 단어를 출력하는 다음 프로그램을 완성하라. 여기서 각 행은 단어를 가리키는 포인터다.
// 따라서 단어가 계속 들어올 때마다 행의 수도 realloc을 써서 늘려가야 한다. 또, 입력 단어
// 도 malloc을 써서 단어 크기에 맞는 만큼의 공간에 저장해야 한다.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char** p = NULL, word[100];
    int i, row = 0;             // row는 행 번호(0, 1, 2, ...)

    while (1) {
        printf("Enter a word.\n");
        gets(word);
        if (strcmp(word, "quit") == 0) break;    // quit가 입력되면 루프를 빠져나감
        p = (char**)realloc(p, sizeof(char*) * row);
        // realloc, row를 써서 단어가 들어올 때마다 행의 수를 증가
        if (p == NULL)          // 널 테스트
            exit(1);            // 널이면 exit로 빠져나감
        p[row] = (char*)malloc(sizeof(char) * strlen(word));
        // malloc을 써서 p[row]가 단어 크기 만큼의 동적 메모리를 가리키게 함
        if (p[row] == NULL)     // 널 테스트
            exit(1);            // 널이면 exit로 빠져나감
        strcpy(p[row], word);   // word를 p[row]로 복사
        row++;                  // 행 번호 증가
    }

    for (i = 0; i < row; i++)   // 루프를 돌면서 p[i]가 가리킨 것을 출력
        printf("%s\n", p[i]);
    printf("\n");               // 개행

    for (i = 0; i < row; i++)   // 루프를 돌면서 p[i]가 가리키는 공간을 반납
        free(p[i]);
    free(p);

    return 0;
}
