/* 문제 21-2 [문자열 처리]
문제 3
프로그램 사용자로부터 이름과 나이를 다음의 형식에 맞춰서 하나의 문자열로 입력 받는다.
  "이정선 29"
  "한수정 7"
  "오선주 17"

이름은 세 글자가 아닐 수도 있고 영문으로 입력될 수도 있다. 단, 이름과 나이 사이에만
공백이 삽입되어야 한다. 이러한 형식으로 두 사람의 정보를 입력 받아서 이름과 나이가
각각 같은지 다른지를 판단하여 출력하는 프로그램을 작성해 보자. 참고로 이 문제는 수준이
어느 정도 있는 문제이니 천천히 생각하며 해결하기 바란다.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char input1[20], input2[20];

    puts("이름과 나이를 입력1: ");
    fgets(input1, sizeof(input1), stdin);

    char* name1 = strtok(input1, " ");
    char* age1 = strtok(NULL, " ");
    age1[strlen(age1) - 1] = 0; // 문자열의 '\n' 삭제

    puts("이름과 나이를 입력2: ");
    fgets(input2, sizeof(input2), stdin);

    char* name2 = strtok(input2, " ");
    char* age2 = strtok(NULL, " ");
    age2[strlen(age2) - 1] = 0; // 문자열의 '\n' 삭제

    printf("\n");
    printf("입력1 이름: %s, 나이: %s\n", name1, age1);
    printf("입력2 이름: %s, 나이: %s\n", name2, age2);

    if (!strcmp(name1, name2)) {
        puts("이름이 같습니다.");
        if (!strcmp(age1, age2))
            puts("나이도 같습니다.");
        else
            puts("나이는 같지 않습니다.");
    }
    else {
        puts("이름이 같지 않습니다.");
        if (!strcmp(age1, age2))
            puts("나이가 같습니다.");
        else
            puts("나이도 같지 않습니다.");
    }


    return 0;
}
