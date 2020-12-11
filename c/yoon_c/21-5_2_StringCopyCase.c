#include <stdio.h>
#include <string.h>

int main() {

    char str1[20] = "1234567890";
    char str2[20];
    char str3[5];

    /*    case 1    */
    strcpy(str2, str1); // str1의 문자열을 str2에 복사
    puts(str2);     // 1234567890

    /*    case 2    */
    strncpy(str3, str1, sizeof(str3));
    puts(str3);     // 문자열의 끝에 널(null)문자가 없기 때문에 출력에 오류 발생!

    /*    case 3    */
    strncpy(str3, str1, sizeof(str3) - 1);
    str3[sizeof(str3) - 1] = 0;
    puts(str3);     // 1234

    return 0;
}

/*

문자열을 복사하는 함수들: strcpy, strncpy

char* strcpy(char* dest, const char* src);
char* strncpy(char* dest, const char* src, size_t n);
    -> 복사된 문자열의 주소 값 반환

*/
