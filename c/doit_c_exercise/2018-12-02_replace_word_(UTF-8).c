// 파일에 저장된 특정 단어 변경하기
#include <stdio.h>
#include <string.h>

int main() {

    // 파일을 열어서 사용할 파일 포인터
    FILE *p_file = NULL;
    char temp[256], *p;
    int find_pos;

    // fopen 함수를 사용하여 'data.txt' 파일을 읽기 모드로 연다.

    p_file = fopen("./2018-12-02_data.txt", "r+");
    if (p_file != NULL) {
        // 텍스트 파일에서 한줄을 얻는다.
        while (fgets(temp, 256, p_file) != NULL) {
            // 읽은 한 줄의 문자열에서 '대전'이라는 단어를 찾아서 '인천'으로 변경
            p = strstr(temp, "대전");
            if (p != NULL) {
                // 문자열에서 찾은 '대전' 위치를 가지고 파일에서
                // '대전'이 위치한 값을 구한다.
                find_pos = strlen(temp) - (p - temp);
                // '대전'이라는 단어 위치로 파일 포인터를 이동
                fseek(p_file, (-1)*find_pos, SEEK_CUR);
                // '대전'을 '인천'으로 수정한다.
                fwrite("인천", 6, 1, p_file);  // UTF-8기준 6바이트
                // fgets로 문자열을 읽었던 위치로 복귀한다.
                fseek(p_file, find_pos - 4, SEEK_CUR);
            }
        }
        printf("파일에서 대전을 인천으로 변경하였습니다.\n");
        fclose(p_file);  // 'data.txt' 파일을 닫는다.
    }

    return 0;
}
