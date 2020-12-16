/* 도전! 프로그래밍 4
도전 2
도전 1에서 구현한 프로그램에 변경을 조금 가하자. 구조체 배열을 선언하는 것이 아니라,
구조체 포인터 배열을 선언하고 구조체 변수를 동적으로 할당하는 형태로 프로그램을 재 구현
해 보자. 즉 프로그램의 형태가 다음과 같이 변경되어야 한다.
  (그림 28-1: 포인터 배열의 구조체 변수 저장 생략...)

그리고 도전 1에서 구현한 방법보다 도전 2에서 구현한 방법이 지니는 장점이 무엇인지도
생각해 보자.
*/
#include <stdio.h>
#include <stdlib.h>

struct book {
    char title[32];
    char author[16];
    int pages;
};

int main() {

    struct book* my_book = (struct book*)malloc(sizeof(struct book) * 3);
    int i;

    printf("도서 정보 입력\n");
    for (i = 0; i < 3; i++) {
        printf("저자: ");
        scanf("%[^\n]s", my_book[i].author); while (getchar() != '\n');
        printf("제목: ");
        scanf("%[^\n]s", my_book[i].title); while (getchar() != '\n');
        printf("페이지 수: ");
        scanf("%d", &my_book[i].pages); getchar();
    }

    printf("\n도서 정보 출력\n");
    for (i = 0; i < 3; i++) {
        printf("저자: ");
        printf("%s\n", my_book[i].author);
        printf("제목: ");
        printf("%s\n", my_book[i].title);
        printf("페이지 수: ");
        printf("%d\n", my_book[i].pages);
    }

    free(my_book);
    return 0;
}
