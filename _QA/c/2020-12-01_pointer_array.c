/*
https://cafe.naver.com/cstudyjava/127170
포인터 배열 질문
자유로뭐 2020.12.01.
char * strArr[3] = {"simple", "string", "array"};
printf("%s \n ", strArr[0] );
printf("%s \n ", strArr[1] );
printf("%s \n ", strArr[2] );

이것의 출력결과가
simple
string
array
인것이 이게 이해가 안되네요..

1. strArr은 char 형 변수의 주소값을 가르키는 포인터 변수이니깐, strArr[0]은 simple의
   반환된 주소(simple의 첫번쨰 문자의 주소값)를 출력해야 하는것 아닌가요?
   왜 simple을 출력하는 것이죠?
2. simple 과 string은 첫번째 문자가 s로 동일한데 그럼 동일한 주소값을 가지나요?
*/
#include <stdio.h>

int main() {

    int a = 1;
    int arr[3] = {10, 20, 30};

    char* str = "test";
    char* strArr[3] = {"hello", "hi", "abc"};

    printf(" a: %d\n", a);
    printf("&a: %p \n", &a);
    printf("--------------------------------------------------\n");

    printf(" arr[0]: %d \n", arr[0]);
    printf("&arr[0]: %p \n", &arr[0]);

    printf("--------------------------------------------------\n");
    printf("str: %s \n", str);
    printf("&str: %p \n", &str);

    printf("--------------------------------------------------\n");
    printf("strArr[0]: %s \n", strArr[0]);
    printf("&strArr[0]: %p \n", &strArr[0]);

    printf("--------------------------------------------------\n");
    printf(" strArr[0]: %s, *(strArr + 0): %s \n", strArr[0], *(strArr + 0));
    printf(" strArr[1]: %s, *(strArr + 1): %s \n", strArr[1], *(strArr + 1));
    printf(" strArr[2]: %s, *(strArr + 2): %s \n", strArr[2], *(strArr + 2));

    printf("--------------------------------------------------\n");
    printf("&strArr[0]: %p,  (strArr + 0): %p \n", &strArr[0], (strArr + 0));
    printf("&strArr[1]: %p,  (strArr + 1): %p \n", &strArr[1], (strArr + 1));
    printf("&strArr[2]: %p,  (strArr + 2): %p \n", &strArr[2], (strArr + 2));

    return 0;
}

/*

1. strArr은 주소값을 가리키는 포인터 변수가 아닙니다. (char* 형의 문자열 포인터들을 저장한 시킨 배열입니다.)

int      arr[3] = {10, 20, 30};
char* strArr[3] = {"simple", "string", "array"};

2. 동일한 주소값을 가지지 않습니다.

printf("%s \n ", strArr[0] );   // %s 배열에 저장된 값을 문자열로 출력합니다.
printf("%s \n ", strArr[1] );
printf("%s \n ", strArr[2] );

printf("%p \n ", &strArr[0] );  // %p 배열의 주소 값을 16진수로 출력합니다.
printf("%p \n ", &strArr[1] );
printf("%p \n ", &strArr[2] );


배열을 포인터 문법으로 사용가능하죠 (반대로도 가능) &strArr[0] 은 strArr로 대체 될 수 있습니다.

char* p = &strArr[0];       // 배열 표기법을 포인터 표기법으로 변경
char* p = & * (strArr + 0); // + 0 을 생략
char* p = & * strArr;       // & 연산자와 * 연산자는 서로 반대 개념이므로 상쇄될 수 있다
char* p = strArr;

*/
