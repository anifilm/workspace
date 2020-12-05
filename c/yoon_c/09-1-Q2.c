/* 문제 09-1 [다양한 함수 정의하기]
문제 2
섭씨(Celsius) 온도를 입력하면 화씨(Fahrenheit) 온도를 반환하는 CelToFah라는 이름의
함수와 그 반대로 화씨 온도를 입력하면 섭씨 온도를 반환하는 FahToCel라는 이름의 함수를
정의하고 이 두함수를 호출하는 예제를 완성해보자. 참고로 섭씨와 화씨간 온도변환의 공식
은 다음과 같다.
  Fah = 1.8 x Cel + 32
*/
#include <stdio.h>

double CelToFah(int c) {
    return (double)c * 1.8 + 32;
}

double FahToCel(int f) {
    return (double)(f - 32) / 1.8;
}

int main() {

    int cel = 32;
    int fah = 89;

    printf("섭씨 %d도는 화씨로: %.2lf도\n", cel, CelToFah(cel));
    printf("화씨 %d도는 섭씨로: %.2lf도\n", fah, FahToCel(fah));

    return 0;
}
