// 여러가지 문자열 선언 방법
#include <stdio.h>

int main() {

    char str1[20] = "안녕하세요";
    char str2[] = "안녕하세요";

    char str3[3][20] = {"안녕하세요", "반가워요", "안녕히 가세요"};

//  char str4[][] = {"안녕하세요", "반가워요", "안녕히 가세요"};    // X
    char str4[][20] = {"안녕하세요", "반가워요", "안녕히 가세요"};  // O

    char* str5[3] = {"안녕하세요", "반가워요", "안녕히 가세요"};

    return 0;
}
