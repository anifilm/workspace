// 두 가지 형태의 문자열 표현
#include <stdio.h>

int main() {

    char str1[] = "My String";  // 변수 형태의 문자열
    char* str2 = "Your String"; // 상수 형태의 문자열 (내용 변경을 할 수 없다)

    printf("%s %s\n", str1, str2);

    str2 = "Our String";    // 가리키는 대상 변경 (내용 변경을 할 수 없다)
    printf("%s %s\n", str1, str2);

    str1[0] = 'X';  // 문자열 변경 가능
    printf("%s\n", str1);

//  str2[0] = 'X';  // 문자열 변경 불가
//  printf("%s\n", str2);

    return 0;
}
