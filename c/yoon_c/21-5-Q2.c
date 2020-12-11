/* 문제 21-2 [문자열 처리]
문제 2
다음과 같이 총 3개의 배열을 선언한다.
  char str1[20];
  char str2[20];
  char str3[40];

그리고는 str1과 str2를 통해서 프로그램 사용자로부터 문자열을 입력 받되, fgets() 함수
호출을 통해서 입력 받는다. 이어서 str1에 저장된 문자열을 str3에 복사하고, str2에
저장된 문자열을 str3에 저장된 문자열의 뒤에 덧붙이자. 그리고 마지막으로 str3에 저장된
문자열을 출력하자. 다소 설명이 복잡했는데, 예를 들어서 str1과 str2에 저장된 문자열이
각각 다음과 같다면,
  str1 "Simple"
  str2 "String"

str3에는 문자열 "SimpleString"이 저장되어야 한다. 그런데 여기서 한가지 주의해야 할
사항이 있다. fgets() 함수를 통해서 문자열을 읽어 들이면 '\n' 문자도 함께 읽혀지는데,
이는 문자열의 일부가 되지 않도록 해야 한다는 점이다. 쉽게 말해서 str1과 str2에 저장
된 문자열에서 '\n'은 소멸시켜야 한다.
*/
#include <stdio.h>
#include <string.h>

int main() {

    char str1[20];
    char str2[20];
    char str3[40];

    puts("문자열 입력1");
    fgets(str1, sizeof(str1), stdin);

    puts("문자열 입력2");
    fgets(str2, sizeof(str2), stdin);

    strncpy(str3, str1, strlen(str1) - 1);
    strcat(str3, str2);

    printf("\nstr3: ");
    puts(str3);

    return 0;
}
