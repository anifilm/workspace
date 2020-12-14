// 바이너리 데이터의 입출력: fread, fwrite
#include <stdio.h>

int main() {

    FILE* src = fopen("24-3_7_src.bin", "rb");
    FILE* des = fopen("24-3_7_des.bin", "wb");
    char buf[20];
    int readCnt;

    if (src == NULL || des == NULL) {
        puts("파일열기 실패!");
        return -1;
    }

    while (1) {
        readCnt = fread((void*)buf, 1, sizeof(buf), src);

        if (readCnt < (int)sizeof(buf)) {
            if (feof(src) != 0) {
                fwrite((void*)buf, 1, readCnt, des);
                puts("파일복사 완료");
                break;
            }
            else
                puts("파일복사 실패");

            break;
        }
        fwrite((void*)buf, 1, sizeof(buf), des);
    }

    fclose(src);
    fclose(des);

    return 0;
}

/*

바이너리 데이터의 입출력: fread, fwrite

size_t fread(void* buffer, size_t size, size_t count, FILE* stream);
    -> 성공 시 전달인자 count, 실패 또는 파일의 끝 도달 시 count보다 작은 값 반환

size_t fwrite(const void* buffer, size_t size, size_t count, FILE* stream);
    -> 성공 시 전달인자 count, 실패 시 count보다 작은 값 반환

*/
