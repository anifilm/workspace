/*
3 다음 코드에 대해 아래 문제가 순서대로 실행될 때, 배열 ar은 어떻게 변하는가?
*/
#include <iostream>

using namespace std;

int ar[] = {0, 1, 2, 3, 5, 7};

int& f(int n) {
    return ar[n];
}

int main() {

/* (1) */
    f(0) = 100; // ar[0] = 100

/* (2) */
    f(0) = f(1) + f(2) + f(3) + f(4);
    // ar[0] = ar[1] + ar[2] + ar[3] + ar[4]
    // ar[0] =    1  +    2  +    3  +    4
    // ar[0] = 11

/* (3) */
    int& v = f(2); v++;
    // int& v = ar[2];
    // v = 2
    // v++ -> 3

    return 0;
}
