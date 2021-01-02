// template을 이요하여 myswap() 제네릭 함수를 만드는 과정
#include <iostream>

using namespace std;

template <class T>
void myswap(T& a, T& b) {
    T tmp;
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

템플릿 선언부는 다음과 같이 한 줄에 붙여쓸 수 있다.

template <class T> void myswap(T & a, T & b) {
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

*/
