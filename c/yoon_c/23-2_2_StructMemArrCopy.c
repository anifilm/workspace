// 함수의 인자로 전달되고 return문에 의해 반환되는 구조체 변수
#include <stdio.h>
#include <stdlib.h>

typedef struct person {
    char name[20];
    char phoneNum[20];
    int age;
} Person;

void ShowPersonInfo(Person man) {
    printf("이름: %s, ", man.name);
    printf("번호: %s, ", man.phoneNum);
    printf("나이: %d\n", man.age);
}

Person ReadPersonInfo() {
    Person man;
    printf("이름 입력: "); scanf("%s", man.name);
    printf("번호 입력: "); scanf("%s", man.phoneNum);
    printf("나이 입력: "); scanf("%d", &man.age);
    return man;
}

int main() {

    // 한글 입출력을 위한 설정 (파일은 EUC-KR로 저장할 것!)
    system("chcp 949");

    Person man = ReadPersonInfo();
    ShowPersonInfo(man);

    return 0;
}
