// fread 함수로 바이너리 파일의 첫 4바이트 값 읽어오기
#include <stdio.h>

int main() {

    int data;

    FILE* p_file = fopen("19-5-3_data.dat", "rb");  // 읽기 모드로 바이너리 파일을 열기
    if (p_file != NULL) {   // 파일 열기에 성공한 경우
        fread(&data, sizeof(int), 1, p_file);
        fclose(p_file);     // 파일을 닫는다
        printf("file data: %d(0x%04x)\n", data, data);  // 파일에서 읽은 값을 출력
    }

    return 0;
}
