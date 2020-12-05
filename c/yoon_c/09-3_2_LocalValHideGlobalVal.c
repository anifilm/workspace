// 전역 변수와 동일한 이름의 지역 변수가 선언되면?
#include <stdio.h>

int Add(int val);
int num = 1;

int main() {

    int num = 5;    // 같은 이름의 전역 변수는 지역 변수에 의해 가려진다.
    printf("num: %d\n", Add(3));
    printf("num: %d\n", num + 9);

    return 0;
}

int Add(int val) {
    int num = 9;    // 같은 이름의 전역 변수는 지역 변수에 의해 가려진다.
    num += val;
    return num;
}
