#include <stdio.h>

int main() {

    char ch1, ch2;

    printf("Enter the first character: ");
    scanf("%c", &ch1);
    printf("First character is %c.\n", ch1);

    printf("Enter the second character: ");
    scanf(" %c", &ch2);
    printf("Second character is %c.\n", ch2);

	return 0;
}

/*

scanf("%c", &ch2); >>> scanf(" %c", &ch2);

" %c" 와 같이 공백을 사용하여 이전 입력 버퍼에 있는 공백 문자를 제거

입력 버퍼를 비우는 명령 fflush(stdin); 또는 rewind(stdin); 사용 가능

*/
