// fwrite 함수로 바이너리 파일에 순차적으로 값 저장하기
#include <stdio.h>

int main() {

    int data = 100, data_list[5] = {0, 1, 2, 3, 4};

    FILE *p_file = fopen("19-5-2_data.dat", "wb");  // 쓰기 모드로 바이너리 파일을 열기
    if (p_file != NULL) {   // 파일 열기에 성공한 경우
        fwrite(&data, sizeof(int), 1, p_file);
        fwrite(data_list, sizeof(int), 5, p_file);
        fclose(p_file);     // 파일을 닫는다
    }

    return 0;
}
