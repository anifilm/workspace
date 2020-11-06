// 05 다음 프로그램을 완성하여 저자명을 입력하면 그 저자의 책에 관한 모든 정보를 출력하는
// 프로그램을 작성하라. 단, 저자는 한 번만 나타난다고 가정하라.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* title;    // 제목
    char* author;   // 저자
    struct {
        int year;   // 발간 연도
        int month;  // 발간 월
    } date;
} bookType;

bookType* look_up(char* author, bookType* shelf, int size) {
    int i;
    // 0부터 size보다 작을 때까지 루프를 돌면서
    for (i = 0; i < size; i++) {
        // shelf[i] 구조체의 저자가 인자로 전달된 저자와 같으면 그 구조체를 리턴
        if (strcmp(shelf[i].author, author) == 0)
            return shelf + i;
    }
    // 찾는 저자가 없으년 널을 리턴
    return NULL;
}

int main() {

    char name[20];
    bookType* srch;
    bookType shelf[3] = {
        {"번역의 탄생", "이희재", {2009, 2}},
        {"나의 문화유산 답사기", "유홍준", {2014, 2}},
        {"논증 글쓰기", "주우석", {2017, 10}}
    };

    printf("저자 이름을 입력하세요.\n");
    gets(name);
    // look_up 함수의 리턴 값을 대입
    srch = look_up(name, shelf, sizeof(shelf) / sizeof(bookType));
    if (srch != NULL)   // srch가 널이 아니면
        // 제목, 저자, 발행연월을 출력
        printf("%s %s %d %d\n", srch->title, srch->author, srch->date.year, srch->date.month);

    return 0;
}
