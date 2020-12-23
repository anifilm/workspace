/* 이론 문제
Q10
다음의 각 문제가 별도로 실행될 때 array 배열은 어떻게 되는가?
*/
#include <iostream>

using namespace std;

int array[] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18};
int& f(int n) {
    return array[n];
}

int main() {

//  (1)
    f(9) = 100;             // array[9] = 100

//  (2)
    for (int i = 1; i < 9; i++)
        f(i) = f(i) + 2;    // array[1] = 4
                            // array[2] = 6
                            // array[3] = 8
                            // array[4] = 10
                            // array[5] = 12
                            // array[6] = 14
                            // array[7] = 16
                            // array[8] = 18
//  (3)
    int v = f(0); v = 100;  // array[0] = 0

//  (4)
    f(f(2)) = 0;            // array[6] = 0

    return 0;
}
