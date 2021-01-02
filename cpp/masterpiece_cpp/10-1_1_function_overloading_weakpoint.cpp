#include <iostream>

using namespace std;

void myswap(int& a, int& b) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void myswap(double& a, double& b) {
    double tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main() {

    int a = 4, b = 5;
    myswap(a, b);  // myswap(int& a, int& b) 호출
    cout << a << '\t' << b << endl;

    double c = 0.3, d = 12.5;
    myswap(c, d);  // myswap(double& a, double& b) 호출
    cout << c << '\t' << d << endl;

    return 0;
}

/*

함수 중복의 약점

앞으로 char 타입의 값을 교환할 일이 생긴다면 추가적으로 함수를 작성해야 한다.
이런 식으로 매개 변수 타입만 다른 myswap() 함수를 계속 중복 작성한다면, 전체 프로그램
의 길이도 늘어나고, 작업 도중 실수의 가능성도 있으면, 함수의 알고리즘을 수정하게 되면
중복된 모든 함수들의 코드를 재수정해야 하는 번거로움이 생긴다.

*/
