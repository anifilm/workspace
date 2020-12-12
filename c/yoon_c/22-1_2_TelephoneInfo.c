// 구조체 변수의 선언과 접근
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
    char name[20];
    char phoneNum[20];
    int age;
};

int main() {

    // 한글 입출력을 위한 설정 (파일은 EUC-KR로 저장할 것!)
    system("chcp 949");

    struct person man1, man2;
    strcpy(man1.name, "임채영");
    strcpy(man1.phoneNum, "010-8731-2354");
    man1.age = 43;

    printf("이름 입력: "); scanf("%s", man2.name);
    printf("번호 입력: "); scanf("%s", man2.phoneNum);
    printf("나이 입력: "); scanf("%d", &man2.age);

    printf("\n[man1의 정보]\n");
    printf("이름: %s, ", man1.name);
    printf("번호: %s, ", man1.phoneNum);
    printf("나이: %d\n", man1.age);

    printf("\n[man2의 정보]\n");
    printf("이름: %s, ", man2.name);
    printf("번호: %s, ", man2.phoneNum);
    printf("나이: %d\n", man2.age);

    return 0;
}
