// fscanf 함수로 문자열을 줄 단위로 모두 읽어오기
#include <stdio.h>

int main() {

    char temp[64];  // 파일에서 문자열을 입력 받을 배열 변수

    FILE* p_file = fopen("19-4-4_data.txt", "rt");  // 읽기 모드로 텍스트 파일을 열기
    if (p_file != NULL) {   // 파일 열기에 성공한 경우
        while (fscanf(p_file, "%s", temp) != EOF) {
            // 파일에서 읽은 문자열을 화면에 출력
            printf("%s\n", temp);
        }
        fclose(p_file);     // 파일을 닫는다
    }

    return 0;
}
