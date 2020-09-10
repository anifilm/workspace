// fscanf 함수로 문자열 형식의 정수값 모두 읽어오기
#include <stdio.h>

int main() {

    int num;

    FILE *p_file = fopen("19-4-3_data.txt", "rt");  // 읽기 모드로 텍스트 파일을 열기
    if (p_file != NULL) {   // 파일 열기에 성공한 경우
        while (fscanf(p_file, "%d", &num) != EOF) {
            // 파일에서 읽은 숫자값을 화면에 출력
            printf("%d\n", num);
        }
        fclose(p_file);     // 파일을 닫는다
    }

    return 0;
}
