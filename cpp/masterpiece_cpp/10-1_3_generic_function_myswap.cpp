// 제네릭(Generic) myswap() 함수 만들기
#include <iostream>

using namespace std;

class Circle {
private:
    int radius;
public:
    Circle(int radius = 1) { this->radius = radius; }
    int getRadius() { return radius; }
};

template <class T>
void myswap(T& a, T& b) {  // 제네릭 함수
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

    Circle donut(5), pizza(20);
    myswap(donut, pizza);
    cout << donut.getRadius() << '\t' << pizza.getRadius() << endl;

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
