// 08 다음 프로그램을 완성하여 영한사전을 만들어 보라. 단, 입력된 단어가 현재 사전에 있으면
// 그 뜻을 디스플레이하고 그렇지 않으면 그 단어를 사전에 추가해야 한다. 프로그램은 "quit"를
// 입력할 때까지 계속 실행해야 한다.
// > Enter a word to search.
// > confess ([Enter])
// > 자백하다. 고백하다. 시인하다. ([Enter])
// > Enter a word to search.
// > confess ([Enter])
// > 자백하다. 고백하다. 시인하다.
// > Enter a word to search.
// > quit
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char word[20];          // 단어 명
    char meaning[100];      // 단어 뜻
} wordType;                 // 단어 구조체

typedef struct {
    wordType dict[5000];    // 5000개의 단어 구조체로 이루어진 배열
    int count;              // 현재 단어 수
} dictType;                 // 사전 구조체

// d가 가리키는 사전에서 w가 가리키는 단어를 찾아 meaning을 리턴
char* search(char *w, dictType *d) {
    int i;
    for (i = 0; i < d->count; i++) {            // i가 0부터 count보다 작을 때까지
        if (strcmp(d->dict[i].word, w) == 0)    // 문자열 비교
            return d->dict[i].meaning;          // 같으면 meaning을 리턴
    }
    return NULL;            // 못 찾으면 널을 리턴
}

// d가 가리키는 사전에 w가 가리키는 단어 명과 m이 가리키는 단어 뜻을 삽입
void insert(char *w, char *m, dictType *d) {
    strcpy(d->dict[d->count].word, w);      // 인덱스 count 위치에 단어 명 삽입
    strcpy(d->dict[d->count].meaning, m);   // 단어 뜻 삽입
    d->count++;                             // 현재 단어 수 증가
}

int main() {

    char word[20], *there;      // 단어의 최대 길이는 20바이트
    char meaning[100];          // 단어 뜻은 최대 100바이트
    dictType mydict;

    mydict.count = 0;           // mydict 구조체 멤버 변수 count를 0으로 초기화

    while (1) {
        printf("Enter a word to search.\n");
        gets(word);
        if (strcmp(word, "quit") == 0)
            break;
        there = search(word, &mydict);
        if (there != NULL)      // 단어를 찾았으면
            puts(there);        // 찾은 단어의 뜻을 출력
        else {
            puts("No such word in current dictionary. Enter the meaning.");
            gets(meaning);
            insert(word, meaning, &mydict);     // 새로운 단어 삽입
        }
    }

    return 0;
}
