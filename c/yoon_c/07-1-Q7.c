/* 문제 07-2 [while문의 중첩]
문제 2
아래의 출력을 보이는 프로그램을 작성해보자.
  *
  o *
  o o *
  o o o *
  o o o o *
참고로, 총 5행에 걸쳐서 출력이 이뤄지고, 행이 더해질 때마다 o 문자의 수가 증가한다는
특징을 기반으로 while문즤 중첩을 구성하면 된다.
*/
#include <stdio.h>

int main() {

    int i, j, line = 5;

    i = 0;
    while (i < line) {
        j = 0;
        while (j < i) {
            printf("o ");
            j++;
        }
        printf("*\n");
        i++;
    }

    return 0;
}
