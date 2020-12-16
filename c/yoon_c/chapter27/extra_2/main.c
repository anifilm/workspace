#include <stdio.h>

extern void AddCnt();
extern void MinCnt();
extern int GetCnt();

int main() {

    AddCnt();
    AddCnt();
    printf("현재 참여자: %d\n", GetCnt());
    MinCnt();
    printf("현재 참여자: %d\n", GetCnt());

    return 0;
}
