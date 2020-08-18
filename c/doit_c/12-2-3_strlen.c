// strlen 함수를 사용하여 문자열 길이 출력하기
#include <stdio.h>
#include <string.h>

int main() {

    int data_length;
    char data[10] = {'h' ,'a', 'p', 'p', 'y', 0,};

    data_length = strlen(data);

    printf("data length = %d\n", data_length);

	return 0;
}
