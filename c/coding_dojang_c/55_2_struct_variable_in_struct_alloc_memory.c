#include <stdio.h>
#include <stdlib.h>

struct Phone {                  // 휴대전화 구조체
    int areacode;               // 국가번호
    unsigned long long number;  // 휴대전화번호
};

struct Person {                 // 사람 구조체
    char name[20];              // 이름
    int age;                    // 나이
    struct Phone phone;         // 휴대전화, 구조체를 멤버로 가진다
};

int main() {

    struct Person *p1 = malloc(sizeof(struct Person));      // 사람 구조체 포인터에 메모리 할당

    p1->phone.areacode = 82;
    p1->phone.number = 3045671234;

    printf("%d %llu\n", p1->phone.areacode, p1->phone.number);

    free(p1);

    return 0;
}
