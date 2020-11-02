// 구조체 예제 3
#include <stdio.h>

struct Books {
    char name[30];      // 책 이름
    char auth[30];      // 저자 이름
    char publ[30];      // 출판사 이름
    int borrowed;       // 빌려 졌는지 유무
};

int main() {

    struct Books harry_potter;
    int i;

    for (i = 0; i < 3; i++) {
        printf("책 %d 정보 입력: ", i);
        scanf("%s %s %s", book_list[i].name, book_list[i].auth, book_list[i].publ);
        book_list[i].borrowed = 0;
    }

    for (i = 0; i < 3; i++) {
        printf("--------------------------------------\n");
        printf("책 이름    : %s\n", harry_potter.name);
        printf("저자 이름  : %s\n", harry_potter.auth);
        printf("출판사 이름: %s\n", harry_potter.publ);

        if (book_list[i].borrowed == 0)
            printf("대출 가능\n");
        else
            printf("대출 되었음.\n");
    }

    return 0;
}
