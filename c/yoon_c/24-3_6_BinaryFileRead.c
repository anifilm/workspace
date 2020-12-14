// 바이너리 데이터의 입출력: fread, fwrite
#include <stdio.h>

int main() {

    int data[9];

    FILE* fp = fopen("24-3_5_data.bin", "rb");  // 읽기 모드로 바이너리 파일을 열기
    if (fp == NULL) {
        puts("파일열기 실패!");
        return -1;
    }

    fread((void*)data, sizeof(int), 9, fp);
    fclose(fp);

    for (size_t i = 0; i < sizeof(data) / sizeof(int); i++)
        printf("%d ", data[i]);
    printf("\n");

    puts("\n파일 읽기를 완료하였습니다.");
    return 0;
}

/*

바이너리 데이터의 입출력: fread, fwrite

size_t fread(void* buffer, size_t size, size_t count, FILE* stream);
    -> 성공 시 전달인자 count, 실패 또는 파일의 끝 도달 시 count보다 작은 값 반환

size_t fwrite(const void* buffer, size_t size, size_t count, FILE* stream);
    -> 성공 시 전달인자 count, 실패 시 count보다 작은 값 반환

*/
