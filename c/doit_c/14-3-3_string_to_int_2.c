#include <stdio.h>

int main() {

    int num = 0, count = 0;
    char num_string[4] = "123";
    // 문자열이 끝날 때까지 반복함
    while (num_string[count] != 0) {
        num = num * 10 + (num_string[count] - '0');
        count++;
    }
    // 변환된 정수값을 %d를 사용하여 출력함
    printf("%s -> %d\n", num_string, num);
	
	return 0;
}
