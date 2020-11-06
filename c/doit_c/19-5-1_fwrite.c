// fwrite 함수로 바이너리 파일에 int형 변수값 저장하기
#include <stdio.h>

int main() {

    int data = 0x00000412;

    FILE* p_file = fopen("19-5-1_data.dat", "wb");  // 쓰기 모드로 바이너리 파일을 열기
    if (p_file != NULL) {   // 파일 열기에 성공한 경우
        fwrite(&data, sizeof(int), 1, p_file);
        fclose(p_file);     // 파일을 닫는다
    }

    return 0;
}
