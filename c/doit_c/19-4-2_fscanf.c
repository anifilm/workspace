// fscanf 함수로 문자열 형식의 정수값 읽어오기
#include <stdio.h>

int main() {

    int num1, num2, num3;

    FILE *p_file = fopen("19-4-2_data.txt", "rt");  // 읽기 모드로 텍스트 파일을 열기
    if (p_file != NULL) {   // 파일 열기에 성공한 경우
        // num1에 412, num2에 100, num3에 123 값을 저장
        fscanf(p_file, "%d %d %d", &num1, &num2, &num3);
        // 파일에서 읽은 값을 화면에 출력
        printf("%d %d %d\n", num1, num2, num3);
        fclose(p_file);     // 파일을 닫는다
    }

    return 0;
}
