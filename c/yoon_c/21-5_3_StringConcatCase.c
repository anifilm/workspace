#include <stdio.h>
#include <string.h>

int main(void) {

    char str1[20] = "First~";
    char str2[20] = "Second";

    char str3[20] = "Simple num: ";
    char str4[20] = "1234567890";

    /*    case 1    */
    strcat(str1, str2); // str1의 문자열 뒤에 str2를 덧붙임
    puts(str1);     // First~Second

    /*    case 2    */
    strncat(str3, str4, 7);
    puts(str3);     // Simple num: 1234567

    return 0;
}

/*

문자열을 덧붙이는 함수들: strcat, strncat

char* strcat(char* dest, const char* src);
char* strncat(char* dest, const char* src, size_t n);
    -> 덧붙여진 문자열의 주소 값 반환

*/
