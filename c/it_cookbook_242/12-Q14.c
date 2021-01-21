/* 14
일련의 정수를 입력받을 때 미리 몇 개가 들어오는지 알고 있으면 그 개수만큼 루프를 돌면서 읽으면 된다. 그러나 그렇지 않을
경우가 문제다. 입력 끝은 엔터키("\n")에 해당하는 문자형이므로 정수처럼 계속해서 %d 형식으로 읽을 수가 없고 별도로 %c
형식으로 읽어야 하기 때문이다. 물론 -1을 입력 끝을 알리는 센티넬로 약속하야 -1을 읽으면 입력을 멈출 수도 있다.
그러나 -1도 입력 데이터로 들어올 수 있으므로 이 역시 문제가 된다. 한 가지 대안은 모든 입력을 일단 문자(열) 읽어 배열에
저장하고 이후 배열을 읽으면서 atoi 함수를 써서 문자열을 정수로 변환하는 것이다. 입력 정수를 문자(열) 형태로 str 배열에
저장한 후 그 배열을 다시 읽어 arr이라는 정수 배열에 저장하는 프로그램을 완성해 보라. 단, 설명의 편의상 널 테스트는 생략
하기로 한다.
  > Enter one or more integers.
  > 22 33 0 -25 86 ([Enter])
  > 22 33 0 -25 86
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char ch, *str, *ptr;
    int i, j;
    int* arr;   // 정수 배열

    printf("Enter one or more integers.\n");
    str = NULL; // 동적 문자열을 가리키는 포인터 str을 NULL로 초기화
    for (i = 0; (ch = getchar()) != '\n'; i++) {    // 읽은 문자가 '\n'이 아닐 때까지
        str = (char*)realloc(str, sizeof(char) * (i + 1));
        // realloc에 의해 str에 (i + 1)개의 문자를 저장하는 공간을 할당
        str[i] = ch;        // str[i]에 읽은 문자를 대입
    }
    str[i] = ' ';           // '\n' 자리에 ' '를 덧씌움
    str[i + 1] = '\n';      // 그 다음에 '\n'을 추가
    // str이 가리키는 문자열에서 ' '를 모두 널 문자('\0')로 치환하기 위해
    // strtok 함수를 호출
    // '\n' 자리에 ' '을 덧씌운 이유도 마지막 문자열 끝에 널 문자를 삽입하기 위함
    ptr = strtok(str, " ");
    while (ptr != NULL)             // strtok의 리턴 값이 NULL이 아닐 때까지
        ptr = strtok(NULL, " ");    // ptr에 strtok의 리턴 값을 대입

    ptr = str;  // ptr을 str로 초기화
    arr = NULL; // 정수 배열 arr을 NULL로 초기화
    for (i = 0; *ptr != '\n'; i++) {
        arr = (int*)realloc(arr, sizeof(int) * (i + 1));
        // realloc에 의해 arr에 (i + 1)개의 정수를 저장하는 공간을 할당
        arr[i] = atoi(ptr);
        // atoi에 의해 ptr이 가리키는 문자열을 정수로 변환하여 arr[i]에 대입
        while (*ptr != '\0')        // ptr이 str 배열의 다음 문자열을 가리키게 해야 함
            ptr = str++;
        ptr++;
    }

    for (j = 0; j < i; j++)
        printf("%d ", arr[j]);
    printf("\n");

    free(arr);
    free(str);

    return 0;
}
