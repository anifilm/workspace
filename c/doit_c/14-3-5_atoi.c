#include <stdio.h>
#include <stdlib.h>     // char(ASCII)를 int로 변환하는 atoi 함수를 포함하는 헤더 파일

int main() {

    int first_num, second_num;
    char first_string[16], second_string[16];

    printf("input first number: ");
    gets(first_string);     // 첫번째 문자열을 입력 받음
    printf("input second number: ");
    gets(second_string);    // 두번째 문자열을 입력 받음

    first_num = atoi(first_string);      // 문자열 -> 정수
    second_num = atoi(second_string);    // 문자열 -> 정수
    // 정수로 변환된 두 수를 합산한 결과값을 출력
    printf("%d + %d = %d\n", first_num, second_num, first_num + second_num);
	
	return 0;
}

/*

#include <stdlib.h>

atoi -> char to int      (문자열을 정수 타입으로)
atof -> char to double   (문자열을 실수 타입으로)
atol -> char to long int (문자열을 long형 정수 타입으로)

*/
