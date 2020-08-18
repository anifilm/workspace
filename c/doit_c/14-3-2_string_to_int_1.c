// 길이 제한 없이 문자열 형식의 숫자를 정수로 변환하기 (1)
#include <stdio.h>
#include <string.h>     // 문자열 길이를 구하는 strlen 함수를 포함하는 헤더 파일

int main() {

    int pos_num = 1, num = 0, i, count;
    char num_string[4] = "123";
    // 문자열 길이를 구해서 count 변수에 저장하면 count 3이 저장됨
    count = strlen(num_string);
    // 문자열 길이보다 1만큼 작게 반복함
    for (i = 0; i < count - 1; i++) pos_num = pos_num * 10;
    // 문자열 길이만큼 반복함
    for (i = 0; i < count; i++) {
        num = num + (num_string[i]-'0') * pos_num;
        pos_num = pos_num / 10;
    }
    // 변환된 정수값을 %d를 사용하여 출력함
    printf("%s -> %d\n", num_string, num);

	return 0;
}
