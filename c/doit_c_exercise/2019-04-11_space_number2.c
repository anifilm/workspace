// 공백으로 구분된 N개의 정수값 분리하기 - 2
#include <stdio.h>

#define MAX_COUNT    40  // 정수의 개수는 최대 40개까지 사용
#define MAX_LENGTH  128  // 문자열은 최대 128의 크기를 가짐

int main() {

    char str[MAX_LENGTH];  // 문자열을 저장할 변수
    int num_list[MAX_COUNT];  // 분리한 정수를 저장할 변수
    // 분리한 정수의 개수를 저장할 변수(count), 정수 분리시에 사용할 변수(num)
    // 반복문의 반복 횟수를 저장할 변수(i)
    int count = 0, num = 0, i;
    // 숫자 분리 상태를 기억할 변수 (0이면 진행 안됨, 1이면 음수 진행, 3이면 양수 진행)
    int state = 0;

    printf("숫자를 공백 문자로 구분해서 입력하세요.\n");
    // fgets(str, MAX_LENGTH, stdin);  // 마지막 문자 처리에 오류가 있다.
    scanf("%[^\n]s", str);

    for (i = 0; str[i] == ' '; i++);  // 앞쪽에 추가된 공백문자를 제거
    // 입력받은 문자열의 끝까지 체크한다.
    for ( ; count < MAX_COUNT && str[i]; i++) {
        if (str[i] != ' ') {
            if (state == 0) {  // 숫자 분리가 진행되지 않은 경우
                if (str[i] == '-') {
                    state = 1;  // 음수
                    i++;  // 부호 다음에 있는 숫자로 이동
                } else state = 3;  // 양수
            }
            // 공백 문자가 아니면 해당 문자를 숫자로 변경해서 num 변수에 합산한다.
            num = num * 10 + str[i] - '0';
        } else {
            // 공백 문자라면 num에 저장된 변수의 값이 완료된 것으로
            // 생각하고 num_list 배열에 추가하고 분리된 정수의 개수를 증가시킨다.
            // 이때 state 값이 1이면 음수로 처리하기 위해 num 값에 -1을 곱해서 대입하고
            // state 값이 3이면 양수이기 때문에 num을 그대로 대입하면 된다.
            num_list[count++] = num * (state - 2);
            // 다음 분리할 숫자를 저장하기 위해 num 변수를 0으로 초기화한다.
            num = 0;
            state = 0;  // 숫자 분리가 완료 되었음을 설정
            // 공백 문자가 중복으로 사용되면 제거
            while (str[i + 1] == ' ') i++;
        }
    }

    // 숫자를 분리중에 반복문이 중단되었으면 해당 숫자를 배열에 추가
    if (state)
        num_list[count++] = num * (state - 2);

    if (count > 0) {
        printf("\n입력된 값: %d", num_list[0]);
        for (i = 1; i < count; i++)
            printf(", %d", num_list[i]);
    }
    printf("\n");

    return 0;
}
