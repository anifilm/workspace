// 06 13장 과제 8번의 영한사전을 바탕으로 프로그램을 빠져나갈 때 현재 사전의 내용을 파일에
// 저장하려 한다. 프로그램이 실행되면 이전에 저장한 파일을 읽어들이려 한다. 과제 8번의 소스
// 코드에 아래 내용을 추가하고 수정하여 이러한 기능을 구현하라.

// 첫 실행:
// > Enter a word to search.
// > computation theory ([Enter])
// > No such word in current dictionary. Enter the meaning.
// > 계산 이론. 알고리즘의 효율에 관한 이론
// > Enter a word to search.
// > quit ([Enter])

// 둘째 실행:
// > Enter a word to search.
// > computation theory ([Enter])
// > 계산 이론. 알고리즘의 효율에 관한 이론
// > Enter a word to search.
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

void save_dictionary(FILE *fp, dictType *d) {
    int i;
    fp = fopen("14_Q6_mydict.bin", "wb");   // 이전 내용 지우고 새로 쓰기 모드로 열기
    i = fwrite((void *)&d, sizeof(dictType), 1, fp);        // 사전 구조체 하나를 저장
    if (i < 1) {
        fprintf(stderr, "Error writing a dictionary file.\n");
        exit(1);
    }
    fclose(fp);                 // 쓰기가 끝난 파일 닫기
}

void read_dictionary(FILE *fp, dictType *d) {
    int i;
    if ((fp = fopen("14_Q6_mydict.bin", "rb")) == NULL)     // 기존 파일이 없으면
        d->count = 0;           // 사전 구조체의 count를 0으로 초기화
    else {                                                  // 기존 파일이 있으면
        i = fread((void *)&d, sizeof(dictType), 1, fp);     // 사전 구조체 하나를 읽어들임
        if (i < 1) {                                        // 읽기 오류 확인
            fprintf(stderr, "Error opening dictionary file.\n");
            exit(1);
        }
        fclose(fp);             // 읽기가 끝난 파일 닫기
    }
}

int main() {

    char word[20], *there;      // 단어의 최대 길이는 20바이트
    char meaning[100];          // 단어 뜻은 최대 100바이트
    dictType mydict;

    FILE *fp = NULL;

    // 기존 파일이 있으면 아래 함수에 의해 사전 구조체를 읽어옴
    // 기존 파일이 없으면 아래 함수 내부에서 구조체 멤버 변수 count를 0으로 초기화
    read_dictionary(fp, &mydict);

    // mydict.count = 0;        // mydict 구조체 멤버 변수 count를 0으로 초기화

    while (1) {
        printf("Enter a word to search.\n");
        gets(word);
        if (strcmp(word, "quit") == 0) {    // 빠져나가기 전에
            save_dictionary(fp, &mydict);   // 현재의 사전 구조체를 파일에 저장
            break;
        }
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
