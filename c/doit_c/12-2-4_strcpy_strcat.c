#include <stdio.h>
#include <string.h>

int main() {

    char data[10] = {'a' ,'b', 'c', 0,};
    char result[16];

    strcpy(result, data);   // data 에 저장된 문자열을 result 로 복사
    strcat(result, "def");  // result 값의 맨 뒤에 "def" 를 추가

    printf("%s + \"def\" = %s\n", data, result);
	
	return 0;
}
