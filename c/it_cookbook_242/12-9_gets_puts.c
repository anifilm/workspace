#include <stdio.h>

int main() {

    char str[10];

    printf("Enter a string.\n");
    gets(str);
    puts(str);

    do {
        printf("\nEnter another string.\n");
        gets(str);
        puts(str);
    } while (*str != '\0');

    printf("Enter a very LONG string.\n");
    gets(str);
    printf("You enterd, \n");
    puts(str);

    return 0;
}

/*

gets에는 특별한 점이 있다.
이 함수는 입력 버퍼에서 엔터키, 즉 '\n'을 읽어서 제거한다.
대신 그 자리에 '\0'을 삽입한다.

gets(str); 에 대해 "Danny ([Enter])"라고 입력하면 str에는 'D', 'a', 'n', 'n', 'y', '\0'이
들어가고 입력 버퍼에서 '\n'이 제거된다.

문자를 읽을 때에는 버퍼에 남아있는 '\n'으로 인해 문제가 발생할 때가 많다.
그러나 gets 함수는 '\n'을 읽어서 제거하기 때문에 이후에 새로운 문자열을 읽는 데에도 아무런 지장이 없다.

do ~ while 루프를 빠져나오려면 엔터키만 누르면 된다.
엔터키가 입력될 경우 gets 함수의 리턴 값인 str이 가리키는 것은 '\n'이 아니라 '\0'이다.
'\n'을 '\0'으로 대체했기 때문이다.

주의! gets는 배열 크기보다 큰 문자열이 입력될 때 문제를 일으킨다. (버퍼 오버플로우)

    gets는 한 줄 읽기 함수, '\n'을 '\0'으로 대체
    puts는 한 줄 쓰기 함수, '\0'을 '\n'으로 대체

gets가 한줄 입력을 위한 함수라면 puts(put string)는 한 줄 출력을 위한 함수다.
puts에도 특별한 점이 있다.

이 함수는 gets와는 정반대로 문자열 끝의 '\0'을 제거하고 대신 '\n'을 삽입하여 자동으로 줄을 바꾼다.
따라서 puts로 문자열을 출력하면 printf 함수처럼 줄 바꿈을 위해 별도로 '\n'을 넣을 필요가 없다.

printf("%s\n", str); 이라고 해야 할 것을 puts(str); 이라고만 하면 된다.

*/
