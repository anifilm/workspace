/* 도전! 프로그래밍 4
도전 3
복소수 (Complex Number)를 나타내는 구조체를 정의하고, 복소수의 덧셈과 곱셈을 위한 함수
를 각각 정의하자. 그리고 이를 기반으로 프로그램 사용자로부터 두 개의 복소수 정보를 입력
받아서 두 복소수의 덧셈과 곱셈의 결과를 출력하는 프로그램을 작성하자.

[실행의 예]
복소수 입력 1 [실수 허수]: 1.2 2.4
복소수 입력 2 [실수 허수]: 1.1 2.2
[합의 결과] 실수: 2.300000, 허수: 4.600000
[곱의 결과] 실수: -3.960000, 허수: 5.280000

[도전3의 해결을 위한 GUIDE]
복소수의 덧셈공식: (a+bi) + (c+di) = (a+c) + (b+d)i
복소수의 곱셈공식: (a+bi) x (c+di) = ac - bd + bci + adi
*/
#include <stdio.h>

typedef struct {
    double real;
    double imag;
} Complex;

Complex Add(Complex c1, Complex c2);
Complex Mul(Complex c1, Complex c2);
void ShowData(Complex c);

int main() {

    Complex c1, c2;

    printf("복소수 입력 1 [실수 허수]: ");
    scanf("%lf %lf", &c1.real, &c1.imag);
    printf("복소수 입력 2 [실수 허수]: ");
    scanf("%lf %lf", &c2.real, &c2.imag);

    printf("[합의 결과] ");
    ShowData(Add(c1, c2));

    printf("[곱의 결과] ");
    ShowData(Mul(c1, c2));

    return 0;
}

Complex Add(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

Complex Mul(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real * c2.real - c1.imag * c2.imag;
    temp.imag = c1.real * c2.imag + c1.imag * c2.real;
    return temp;
}

void ShowData(Complex c) {
    printf("실수부: %lf, 허수부: %lf\n", c.real, c.imag);
}
