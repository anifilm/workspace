// 배열에 저장된 문자열의 길이를 구하는 함수 만들기
#include <stdio.h>

int GetStringLength(char data[]) {

    int count = 0;

    while(data[count]) count++;
    return count;
}

int main() {

    int data_length;
    char data[10] = {'h' ,'a', 'p', 'p', 'y', 0,};

    data_length = GetStringLength(data);

    printf("data length = %d\n", data_length);

	return 0;
}
