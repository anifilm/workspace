// 문제 02-4 [C++의 표준함수 호출]
// 문제 2
// 다음 세 함수를 이용해서 0이상 100미만의 난수를 총 5개 생성하는 예제를 만들되, C++의
// 헤더를 선언해서 작성해보자. 참고로 C언어의 경우 time 함수는 <time.h>에 선언되어 있고,
// rand 함수와 srand 함수는 <stdlib.h>에 선언되어 있다.
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(NULL));
    int num[5] {};

    for (int i {}; i < 5; i++)
        num[i] = rand() % 100;

    for (int i {}; i < 5; i++)
        cout << num[i] << ' ';
    cout << endl;

    return 0;
}
