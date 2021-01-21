/* 02
다음 예에서 rate라는 전역 변수를 없애는 대신 그것을 main 내부의 지역 변수로 선언하라. 이후 main이
change_rate 함수를 호출하면서 rate를 인자로 전달하고 change_rate는 변경된 rate를 리턴하도록 수정
하라. 또, main은 그 리턴 값을 받아서 printf로 출력하도록 수정하라.

  double rate;

  void change_rate() {
      rate *= 1.1;
  }

  int main() {
      rate = .2;
      change_rate();
      printf("The modified rate is %lf\n", rate);
      return 0;
  }

*/
#include <stdio.h>

double change_rate(double r) {
    r *= 1.1;
    return r;
}

int main() {
    double rate = .2;
    rate = change_rate(rate);
    printf("The modified rate is %lf\n", rate);
    return 0;
}
