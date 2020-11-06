// 07 과제 6번에서는 단어 수에 해당하는 count 변수를 사전 구조체 정의에 포함시키는 바람에 사전
// 전체가 하나의 구조체로 되어서 파일에 저장할 때도 사전 전체를 다시 저장할 수 밖에 없었다.
// 그러나 만약 사전 구조체 정의에서 count 변수를 빼면 파일의 모든 내용을 동일하게 wordType으로
// 가져갈 수 있다. 따라서 프로그램을 빠져 나갈 때에도 이전 파일의 끝에 새로운 단어만 추가할 수
// 있다. 아래 프로그램을 완성하여 append 모드에서 파일을 저장할 수 있게 하라.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char word[20];          // 단어 명
    char meaning[100];      // 단어 뜻
} wordType;                 // 단어 구조체

// dict 배열에서 w가 가리키는 단어 찾기. count는 배열 내 현재 단어 개수
char* search(char* w, wordType dict[], int count) {
    int i;
    for (i = 0; i < count; i++) {               // 0부터 count보다 작을 때까지
        if (strcmp(dict[i].word, w) == 0)       // 배열 단어명이 w가 가리키는 단어명과 같으면
            return dict[i].meaning;             // 단어 뜻을 리턴
    }
    return NULL;            // 그런 단어가 없으면 널을 리턴
}

// dict 배열에 w가 가리키는 단어 추가하기. cptr은 count 변수를 가리키는 포인터
void insert(char* w, char* m, wordType dict[], int* cptr) {
    strcpy(dict[*cptr].word, w);        // 배열 끝에 새로운 단어 명 추가
    strcpy(dict[*cptr].meaning, m);     // 단어 뜻 추가
    (*cptr)++;                          // 현재 단어 수 증가
}

// 파일에 새로운 단어를 추가하기. oldcnt은 이전 파일 단어 수, newcnt는 현재 단어수
void save_dictionary(FILE* fp, wordType dict[], int oldcnt, int newcnt) {
    int i;
    fseek(fp, 0L, SEEK_END);            // 위치 포인터를 파일 끝으로
    for (i = oldcnt; i < newcnt; i++) { // 추가된 단어에 대해서
        // 구조체를 하나씩 파일에 저장하면서 쓰기 오류 확인
        if (fwrite((void*)&dict[i], sizeof(wordType), 1, fp) < 1) {
            fprintf(stderr, "Error writing a structure.\n");    // 쓰기 오류 처리
            exit(1);                                            // 종료
        }
    }
}

// 이전 파일 읽어 들이기. 단어 수를 세어서 *cptr 즉, count에 저장
void read_dictionary(FILE* fp, wordType dict[], int* cptr) {
    *cptr = 0;
    fseek(fp, 0, SEEK_SET);     // append 모드로 열면 포인터가 파일 끝으로 감. 이를 처음으로
    while (fread((void*)&dict[*cptr], sizeof(wordType), 1, fp))
        (*cptr)++;              // 이전에 저장한 단어를 배열로 읽어 들임
    if (!feof(fp)) {            // 파일 끝 테스트
        printf("Error reading dictionary file.\n");
        exit(1);
    }
}

int main() {

    char word[20], *there;      // 단어 명은 최대 20바이트
    char meaning[100];          // 단어 뜻은 최대 100바이트
    int count, old_count;
    wordType mydict[5000];      // 구조체 배열로 사전을 구현

    // append binary (read and write) 모드로 열기
    FILE* fp = fopen("14-Q7_mydict.bin", "a+b");

    read_dictionary(fp, mydict, &count);    // count 값이 바뀌어야 하니 참조 호출로
    old_count = count;                      // 읽어온 파일 단어 개수를 old_count에 저장

    while (1) {
        printf("Enter a word to search.\n");
        gets(word);
        if (strcmp(word, "quit") == 0) {    // 빠져나가기 전에
            save_dictionary(fp, mydict, old_count, count);   // 추가 단어를 이전 파일 끝에 이어붙임
            break;
        }
        there = search(word, mydict, count);
        if (there != NULL)      // 단어를 찾았으면
            puts(there);        // 찾은 단어의 뜻을 출력
        else {
            puts("No such word in current dictionary. Enter the meaning.");
            gets(meaning);
            insert(word, meaning, mydict, &count);     // 새로운 단어를 배열 끝에 추가
        }
    }

    fclose(fp);
    return 0;
}
