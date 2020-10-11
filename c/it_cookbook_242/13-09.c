#include <stdio.h>

int main() {

    int i;
    int entry[3] = {201504, 201911, 202002};    // 입사년월
    char name[3][20] = {"Lim", "Lee", "Park"};  // 이름
    char phone[3][15] = {"02-5432-1234", "031-4434-2580", "055-2535-9959"};    // 전화번호

    for (i = 0; i < 3; i++)
        printf("%d %s %s\n", entry[i], name[i], phone[i]);

    return 0;
}
