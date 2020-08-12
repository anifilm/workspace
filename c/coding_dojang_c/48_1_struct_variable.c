#include <stdio.h>
#include <string.h>     // strcpy 함수가 선언된 헤더 파일

struct Person {         // 구조체 정의
    char name[20];
    int age;
    char address[100];
} p1;                   // 구조체를 정의하는 동시에 변수 p1 선언

int main() {

    // 점으로 구조체 멤버에 접근하여 값 할당
    strcpy(p1.name, "홍길동");
    p1.age = 30;
    strcpy(p1.address, "서울시 용산구 한남동");

    // 점으로 구조체 멤버에 접근하여 값 출력
    printf("이름: %s\n", p1.name);
    printf("나이: %d\n", p1.age);
    printf("주소: %s\n", p1.address);

    return 0;
}
