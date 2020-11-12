// 매개변수의 기본값 (Default Value)
#include <iostream>

// 함수의 원형이 선언될 때는 원형에 기본값을 지정하여야 한다.
int Adder(int num1 = 1, int num2 = 2);

int main() {

    std::cout << Adder() << std::endl;
    std::cout << Adder(5) << std::endl;
    std::cout << Adder(3, 5) << std::endl;

    return 0;
}

int Adder(int num1, int num2) {
    return num1 + num2;
}
