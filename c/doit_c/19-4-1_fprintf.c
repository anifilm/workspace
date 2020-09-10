// fprintf 함수를 사용하여 파일에 "Hello" 문자열 저장하기
#include <stdio.h>

int main() {

    FILE *p_file = fopen("19-4-1_data.txt", "wt");  // 쓰기 모드로 텍스트 파일을 열기
    if (p_file != NULL) {               // 파일 열기에 성공한 경우
        fprintf(p_file, "Hello\n");     // 파일에 "Hello" 문자열을 쓰고 줄바꿈을 한다
        fclose(p_file);                 // 파일을 닫는다
    }

    return 0;
}
