// fseek 함수와 ftell 함수로 바이너리 파일 크기 알아내기
#include <stdio.h>

int main() {

    int file_size = 0;

    FILE *p_file = fopen("19-5-4_data.dat", "rb");  // 읽기 모드로 바이너리 파일을 열기
    if (p_file != NULL) {               // 파일 열기에 성공한 경우
        fseek(p_file, 0, SEEK_END);     // 파일의 끝으로 이동
        file_size = ftell(p_file);      // 현재 파일 위치로 파일의 크기를 구함
        printf("file size: %d\n", file_size);
        fclose(p_file);                 // 파일을 닫는다
    }

    return 0;
}
