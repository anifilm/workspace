/* 03
회문(Palindrome)이란 앞에서부터 읽으나 뒤에서부터 읽으나 동일한 문장을 말한다. 주어진 문장이 회문인지
아닌지를 확인하는 프로그램을 작성하라. 단, 프로그램은 'Q'가 입력될 때까지 계속되어야 하며 문장은 최대
100문자로 가정한다.
힌트 A 배열에 입력 문장을 넣고 B 배열에는 A 배열을 역순으로 넣는다. 예를 들어 데이터 개수가 5개라서
A 배열 인덱스가 0에서 4까지 가면 B 배열의 인덱는 4에서 0까지 가면서 넣어야 한다. 이후에 처음부터 끝
까지 두 배열의 요소가 모두 같은지 비교하면서 다른 경우를 만나면 곧바로 루프를 빠져나온다. 이렇게 하려면
루프를 들어가기 전에 is_palondrome 변수를 true로 초기화하고 루프 내부에서 요소가 서로 다를 경우 그것을
false로 바꾼 후에 빠져나온다. 빠져나온 이후 이 변수 값을 기준으로 회문인지 아닌지를 출력한다. 빠져나올
때까지 계속 같았으면 이 변수가 초기화 값인 true를 유지하기 때문이다.
  > Enter a sentence.
  > able was I ere I saw elba ([Enter])
  > Yes, it is a palindrome.
  > Enter a sentence.
  > olleh ([Enter])
  > No, it is NOT a palindrome.
  > Q ([Enter])
*/
#include <stdio.h>
#define TRUE       1
#define FALSE      0
#define MAX_LEN  100

int main() {

    char a[MAX_LEN], b[MAX_LEN];
    int i, count1, count2, is_palindrome = TRUE;

    while (1) {
        printf("Enter a sentence.\n");
        gets(a);
        if (a[0] == 'q' || a[0] == 'Q') break;
        for (i = 0; ; i++) {
            if (a[i] == '\0') {
                count1 = count2 = i - 1;
                break;
            }
        }
        for (i = 0; count1 >= 0; i++) {
            b[count1] = a[i];
            count1--;
        }
        for (i = 0; i <= count2; i++) {
            if (b[i] != a[i]) {
                is_palindrome = FALSE;
                break;
            }
        }
        if (is_palindrome)
            printf("Yes, it is a palindrome.\n");
        else
            printf("No, it is NOT a palindrome.\n");
        printf("\n");
    }

    return 0;
}
