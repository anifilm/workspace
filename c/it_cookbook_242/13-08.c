#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee {
    int entry_year;     // 입사연도
    char residence[6];  // 거주지
    char *name;         // 사원 이름
};

void show_name(struct employee her) {
    printf("%s\n", her.name);
    strcpy(her.name, "홍두루미");
}

int main() {

    struct employee a = {2019, "Seoul", NULL};

    a.name = (char *)malloc(sizeof(char) * 9);
    strcpy(a.name, "박하영");

    show_name(a);
    printf("%s\n", a.name);

    return 0;
}
