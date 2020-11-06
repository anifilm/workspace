#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee {
    int entry_year;     // 입사연도
    char residence[6];  // 거주지
    char* name;         // 사원 이름
};

int main() {

    struct employee a = {2019, "Seoul", NULL};
    struct employee b;

    a.name = (char*)malloc(sizeof(char) * 5);
    strcpy(a.name, "Lee");

    b = a;      // 얕은 복사 (Shallow Copy)
    strcpy(b.name, "Park");

    printf("%d %s %s\n", a.entry_year, a.residence, a.name);
    printf("%d %s %s\n", b.entry_year, b.residence, b.name);

    return 0;
}

/*

위 상태에서 free(a.name); 으로 메모리 공간을 반납하면 b.name은
이미 반납된 공간을 가리키는 댕글링 포인터가 된다.

*/
