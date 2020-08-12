#include <stdio.h>
#include <string.h>

struct Person {         // 구조체 정의
    char name[20];
    int age;
    char address[100];
};

int main() {

    struct Person p1;       // 구조체 변수 선언
    struct Person *ptr;     // 구조체 포인터 선언

    ptr = &p1;              // p1의 메모리 주소값을 ptr에 할당

    // 점으로 구조체 멤버에 접근하여 값 할당
    strcpy(p1.name, "홍길동");
    p1.age = 30;
    strcpy(p1.address, "서울시 용산구 한남동");

    // 점으로 구조체 멤버에 접근하여 값 출력
    printf("이름: %s\n", p1.name);
    printf("나이: %d\n", p1.age);
    printf("주소: %s\n", p1.address);
    printf("\n");

    // 화살표 연산자로 구조체 멤버에 접근하여 값 할당
    ptr->age = 32;
    printf("나이(수정): %d\n", ptr->age);

    return 0;
}
