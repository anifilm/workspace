/* 도전! 프로그래밍 4
도전 1
간단한 도서 관리용 프로그램을 작성해 보자. [제목, 저자명, 페이지수]에 대한 정보를 저장
할 수 있는 구조체를 정의하고, 구조체 배열을 선언해서 도서에 대한 정보를 저장하는 구조로
작성해 보자. main 함수에서는 사용자로 부터 3권의 도서에 대한 정보를 입력 받고, 입력이
끝나면 도서에 대한 내용을 출력해 주도록 하자.

[실행의 예]
도서 정보 입력
저자: Yoon
제목: C Programming
페이지 수: 200
저자: Hong
제목: C++ Programming
페이지 수: 250
저자: James
제목: OS for Programmer
페이지 수: 300

도서 정보 출력
(입력 내용 출력 이하 생략...)
*/
#include <stdio.h>

struct book {
    char title[32];
    char author[16];
    int pages;
};

int main() {

    struct book my_book[3];
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

    return 0;
}
