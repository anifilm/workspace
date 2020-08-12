#include <stdio.h>

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

    struct Person p1 = {.name = "Andrew", .age = 25, {.areacode = 82, .number = 3045671234}};

    printf("%d %llu\n", p1.phone.areacode, p1.phone.number);

    struct Person p2 = {"Maria", 19, {82, 3087654321}};

    printf("%d %llu\n", p2.phone.areacode, p2.phone.number);

    return 0;
}
