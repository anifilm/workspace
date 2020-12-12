// 구조체 배열의 초기화
#include <stdio.h>

struct person {
    char name[20];
    char phoneNum[20];
    int age;
};

int main() {

    struct person arr[3] = {
        {"임채영", "010-8731-2354", 43},   // 첫 번째 요소의 초기화
        {"정지영", "010-1313-0002", 22},   // 두 번째 요소의 초기화
        {"한지수", "010-1771-1234", 19}    // 세 번째 요소의 초기화
    };

    int i;
    for (i = 0; i < 3; i++)
        printf("%s %s %d\n", arr[i].name, arr[i].phoneNum, arr[i].age);

    return 0;
}
