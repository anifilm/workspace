// 몫과 나머지 구하기 (%)
#include <iostream>

using namespace std;

int main() {

    double x {5.7};
    int div1 = static_cast<int>(x / 5);
    double mod1 = x - 5 * static_cast<int>(x / 5);

    int y {10};
    int div2 = static_cast<int>(y / 3);
    double mod2 = y % 3;

    cout << "5.7 / 5 = 몫: " << div1 << ", 나머지: " << mod1 << endl;
    cout << "10 / 3 = 몫: " << div2 << ", 나머지: " << mod2 << endl;

    return 0;
}

/*

모듈러 연산자 (Modular operator)
모듈러 연산은 나눗셈의 나머지를 구하는 연산이다. 그래서 모듈러 연산자 (modular operator) %를
나머지 연산자 (remainder operator)라고도 한다.
"정수" 피연산자에서만 작동하며 정수 나눗셈을 수행 후 나머지를 반환한다.
(Ex. 7 / 4 = 1의 나머지: 3 → 7 % 4 = 3)

부동 소수 나머지 구하기 = 원래 값 - (나누려는 수 * 몫)
    원래 값 = x
나누려는 수 = 5
        몫 = static_cast<int>(x / 5);

또는 048 → modf 함수 사용

*/
