// 구조체를 사용해서 사람의 신체 정보를 입력 받고 출력하기
#include <stdio.h>

typedef struct People {
    char name[12];
    unsigned short int age;
    float height;
    float weight;
} Person;

int main() {

    Person data;    // person 자료형으로 data 변수를 선언

    printf("대상자의 정보를 입력하세요.\n");
    printf("이름: ");
    scanf("%s", data.name);
    printf("나이: ");
    scanf("%hu", &data.age);
    printf("키: ");
    scanf("%f", &data.height);
    printf("몸무게: ");
    scanf("%f", &data.weight);

    printf("\n입력한 정보는 다음과 같습니다.\n");
    printf("%s: %d세, %.1fcm, %.1fkg\n", data.name, data.age, data.height, data.weight);

    return 0;
}
