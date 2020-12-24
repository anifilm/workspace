/*
Q3
함수 big()을 호출하는 경우는 다음과 같다.
  (main() 함수, 실행 결과 생략...)

  (1) big() 함수를 2개 중복하여 작성하고 프로그램을 완성하라.
  (2) 디폴트 매개 변수를 가진 하나의 함수로 big()을 작성하고 프로그램을 완성하라.
*/
#include <iostream>

using namespace std;

/* (2) 디폴트 매개 변수를 가진 하나의 함수로 big()을 작성하고 프로그램을 완성하라. */
int big(int num1, int num2, int max = 100) {
    int big = num1;
    if (big < num2) big = num2;
    if (big < max) return big;
    else return max;
}

int main() {

    int x = big(3, 5);  // 3과 5중 큰 값 5는 최대값 100보다 작으므로, 5를 반환
    int y = big(300, 60);   // 300과 60중 큰 값 300이 최대값 100보다 크므로, 100을 반환
    int z = big(30, 60, 50);    // 30과 60중 큰 값 60이 최대값 50보다 크므로, 50을 반환
    cout << x << ' ' << y << ' ' << z << endl;

    return 0;
}
