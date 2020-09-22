// 09 8자리 이하의 패스워드를 입력바다 읽은 내용을 출력하는 프로그램을 작성하라.
// 힌트 scanf나 getchar로 읽은 문자가 '\n'이 아닐 때까지 읽으면서 입력 개수를 추적해야 한다.
// 배열의 크기가 8개더라도 실제 데이터는 앞에서부터 5개 들어가 있을 수 있다. 따라서 그 개수를
// 추적해야 개수만큼만 출력할 수 있다.
// > Enter password. (maximum 8 characters)
// > smile ([Enter])
// > Your password is smile.
#include <stdio.h>

int main() {

    char ch[8];
    int i, count;

    printf("Enter password. (maximum 8 characters)\n");
    scanf("%s", ch);

    for (i = 0; i < 8; i++) {
        if (ch[i] == '\0') {
            count = i;
            break;
        } else
            count = 8;
    }
    // printf("%d\n", count);

    printf("Your password is ");
    for (i = 0; i < count; i++) {
        printf("%c", ch[i]);
    }
    printf(".\n");

    return 0;
}
